Make Note: What version of cmake is running in your environment?
cmake version 3.25.1

Make Note: Run make help and figure out what the valid targets (command arguments) are for this project. For all the targets that start with “hello”, can you figure out what they produce? What about all and clean?
... all (the default if no target is provided)
... clean
... depend
... edit_cache
... rebuild_cache
... hello_world
... hello.o
... hello.i
... hello.s

Making hello.o builds the hello.cpp.o file, making hello.i preprocesses the source file to hello.cpp.i, and make hello.s compiles the source file to assembly within the file hello.cpp.s. Make all will build and link all of the source code files that have not been changed since the last build, and make clean will delete all currently existing compiled files to ensure that they must be recompiled.

The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
They are relative to the directory in where the cmake file exists. On my machine it is: /Users/seandoyle/NYU/classes/ProcessorDesign/Lab1

What some differences between cmake and ninja?
Cmake is a meta build system which means it creates the files that when run will convert source code to executable machine code. Ninja on the other hand is a build system which converts source code to executable machine code. Cmake can be used to create the Ninja files which will convert source code to machine code. 

Why is it important to run cmake in its own directory?
cmake generates a bunch of files that you likely don't want to track using source control. Running cmake in its own directory isolates where these files are created to make it easy to ignore them in source control.