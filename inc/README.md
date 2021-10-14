CMake: Includes Model
=====================

Original CMake approach: Create include .txts which define variables, and require the consumer
to use the variables in the right places.


# Usage

```ps1
	cmake -G Ninja -B build.dir
	cmake --build build.dir --clean-first -j9
	./build.dir/product
```


# Risks

In this particular incarnation, the libraries both depend on the consumers to ensure that the
compiler flags are set for them.

For instance, `lib1.cpp` will not emit any code if `LIB1` is not defined when it compiles.

This only works here because the main `CMakeLists.txt` shoves the defines we provide in
`LIB1_CXX_FLAGS` into the global `CMAKE_CXX_FLAGS` variable. However, that means that `lib2.cpp`
is also compiled with this flag...
