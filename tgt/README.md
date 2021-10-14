CMake: Target/Depends Model
===========================

CMake has evolved a simpler/cleaner model: fully declared target dependency injection,
backed by methods to attach properties to targets as PUBLIC, PRIVATE and INTERFACE.

See: https://leimao.github.io/blog/CMake-Public-Private-Interface/

- PUBLIC properties are attached to the target and any target that depends on it publicly,
- PRIVATE properties are attached to the target only and never inherited,
- INTERFACE properties are presented to dependencies but NOT attached to the target,

This is backed by extensions such as `INTERFACE_INCLUDE_DIRECTORIES` and `IMPORTED`
library targets

```cmake
	# CMake classes runtime loaded plugins as 'MODULE's
	ADD_LIBRARY ( Maya MODULE IMPORTED GLOBAL )
	IF (NUO_MACOSX)
		SET_TARGET_PROPERTIES(
			Maya PROPERTIES
			IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/Maya.so"
			IMPORTED_SO_NAME "Maya.so"
		)
	ENDIF ()
```

# Usage

```ps1
	cmake -G Ninja -B build.dir
	cmake --build build.dir --clean-first -j9
	./build.dir/product
```
