# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/medgrand/Repositories/MAI_OOP/lab1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/medgrand/Repositories/MAI_OOP/lab1/build

# Include any dependencies generated for this target.
include CMakeFiles/ts.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ts.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ts.dir/flags.make

CMakeFiles/ts.dir/src/tests.cpp.o: CMakeFiles/ts.dir/flags.make
CMakeFiles/ts.dir/src/tests.cpp.o: ../src/tests.cpp
CMakeFiles/ts.dir/src/tests.cpp.o: CMakeFiles/ts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ts.dir/src/tests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ts.dir/src/tests.cpp.o -MF CMakeFiles/ts.dir/src/tests.cpp.o.d -o CMakeFiles/ts.dir/src/tests.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab1/src/tests.cpp

CMakeFiles/ts.dir/src/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ts.dir/src/tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab1/src/tests.cpp > CMakeFiles/ts.dir/src/tests.cpp.i

CMakeFiles/ts.dir/src/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ts.dir/src/tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab1/src/tests.cpp -o CMakeFiles/ts.dir/src/tests.cpp.s

# Object files for target ts
ts_OBJECTS = \
"CMakeFiles/ts.dir/src/tests.cpp.o"

# External object files for target ts
ts_EXTERNAL_OBJECTS =

ts: CMakeFiles/ts.dir/src/tests.cpp.o
ts: CMakeFiles/ts.dir/build.make
ts: CMakeFiles/ts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ts.dir/build: ts
.PHONY : CMakeFiles/ts.dir/build

CMakeFiles/ts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ts.dir/clean

CMakeFiles/ts.dir/depend:
	cd /home/medgrand/Repositories/MAI_OOP/lab1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/medgrand/Repositories/MAI_OOP/lab1 /home/medgrand/Repositories/MAI_OOP/lab1 /home/medgrand/Repositories/MAI_OOP/lab1/build /home/medgrand/Repositories/MAI_OOP/lab1/build /home/medgrand/Repositories/MAI_OOP/lab1/build/CMakeFiles/ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ts.dir/depend
