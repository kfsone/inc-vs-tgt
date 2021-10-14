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
