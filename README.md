CMake Dependency Evolution
==========================

This repos contains examples of how cmake dependency injection has evolved over time.


# "inc": old school

The first, "inc", demonstrates the Old Way: include files which define mountains of variables
that it is then the consumer's responsibility to inject into the right variables/methods.


# "tgt": new school
The second, "tgt", demonstrates the New Way: attaching properties to targets and then using
newer cmake functions to attach dependencies to targets and bring in the attached properties.


# Notes

I've only aimed to give a 30,000 feet big picture showcase of the transition, there are many
nuances that I don't engage: pure INTERFACE targets, IMPORTED targets, etc.

Each project contains it's own README.md along with syntax for building and running the
project.

In each case, I'm assumed you will use Ninja as the generator (now present as a core build tool
on most OSes: Linux, Mac, Windows) and do compilation in a subdirectory called `build.dir`.

```ps1
	cmake
		-G Ninja           # specify the Ninja generator
		-B build.dir       # specify the working directory for builds
```

and then I use `cmake` to invoke the build tools so as to make the commands platform-independent.

```ps1
	cmake
		--build build.dir  # tells cmake to perform the build configured in build.dir
		--clean-first      # force a `clean` first
		-j9	               # specifies parallelism of 9 workers
```

