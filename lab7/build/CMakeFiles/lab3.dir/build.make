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
CMAKE_SOURCE_DIR = /home/medgrand/Repositories/MAI_OOP/lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/medgrand/Repositories/MAI_OOP/lab7/build

# Include any dependencies generated for this target.
include CMakeFiles/lab3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab3.dir/flags.make

CMakeFiles/lab3.dir/src/Factory.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/src/Factory.cpp.o: ../src/Factory.cpp
CMakeFiles/lab3.dir/src/Factory.cpp.o: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab3.dir/src/Factory.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/src/Factory.cpp.o -MF CMakeFiles/lab3.dir/src/Factory.cpp.o.d -o CMakeFiles/lab3.dir/src/Factory.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab7/src/Factory.cpp

CMakeFiles/lab3.dir/src/Factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/src/Factory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab7/src/Factory.cpp > CMakeFiles/lab3.dir/src/Factory.cpp.i

CMakeFiles/lab3.dir/src/Factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/src/Factory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab7/src/Factory.cpp -o CMakeFiles/lab3.dir/src/Factory.cpp.s

CMakeFiles/lab3.dir/src/Observer.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/src/Observer.cpp.o: ../src/Observer.cpp
CMakeFiles/lab3.dir/src/Observer.cpp.o: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab3.dir/src/Observer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/src/Observer.cpp.o -MF CMakeFiles/lab3.dir/src/Observer.cpp.o.d -o CMakeFiles/lab3.dir/src/Observer.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab7/src/Observer.cpp

CMakeFiles/lab3.dir/src/Observer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/src/Observer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab7/src/Observer.cpp > CMakeFiles/lab3.dir/src/Observer.cpp.i

CMakeFiles/lab3.dir/src/Observer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/src/Observer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab7/src/Observer.cpp -o CMakeFiles/lab3.dir/src/Observer.cpp.s

CMakeFiles/lab3.dir/src/Visitor.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/src/Visitor.cpp.o: ../src/Visitor.cpp
CMakeFiles/lab3.dir/src/Visitor.cpp.o: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab3.dir/src/Visitor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/src/Visitor.cpp.o -MF CMakeFiles/lab3.dir/src/Visitor.cpp.o.d -o CMakeFiles/lab3.dir/src/Visitor.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab7/src/Visitor.cpp

CMakeFiles/lab3.dir/src/Visitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/src/Visitor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab7/src/Visitor.cpp > CMakeFiles/lab3.dir/src/Visitor.cpp.i

CMakeFiles/lab3.dir/src/Visitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/src/Visitor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab7/src/Visitor.cpp -o CMakeFiles/lab3.dir/src/Visitor.cpp.s

CMakeFiles/lab3.dir/src/Scene.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/src/Scene.cpp.o: ../src/Scene.cpp
CMakeFiles/lab3.dir/src/Scene.cpp.o: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab3.dir/src/Scene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/src/Scene.cpp.o -MF CMakeFiles/lab3.dir/src/Scene.cpp.o.d -o CMakeFiles/lab3.dir/src/Scene.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab7/src/Scene.cpp

CMakeFiles/lab3.dir/src/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/src/Scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab7/src/Scene.cpp > CMakeFiles/lab3.dir/src/Scene.cpp.i

CMakeFiles/lab3.dir/src/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/src/Scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab7/src/Scene.cpp -o CMakeFiles/lab3.dir/src/Scene.cpp.s

CMakeFiles/lab3.dir/src/NPC.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/src/NPC.cpp.o: ../src/NPC.cpp
CMakeFiles/lab3.dir/src/NPC.cpp.o: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab3.dir/src/NPC.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/src/NPC.cpp.o -MF CMakeFiles/lab3.dir/src/NPC.cpp.o.d -o CMakeFiles/lab3.dir/src/NPC.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab7/src/NPC.cpp

CMakeFiles/lab3.dir/src/NPC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/src/NPC.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab7/src/NPC.cpp > CMakeFiles/lab3.dir/src/NPC.cpp.i

CMakeFiles/lab3.dir/src/NPC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/src/NPC.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab7/src/NPC.cpp -o CMakeFiles/lab3.dir/src/NPC.cpp.s

CMakeFiles/lab3.dir/src/main.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/lab3.dir/src/main.cpp.o: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/lab3.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/src/main.cpp.o -MF CMakeFiles/lab3.dir/src/main.cpp.o.d -o CMakeFiles/lab3.dir/src/main.cpp.o -c /home/medgrand/Repositories/MAI_OOP/lab7/src/main.cpp

CMakeFiles/lab3.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/medgrand/Repositories/MAI_OOP/lab7/src/main.cpp > CMakeFiles/lab3.dir/src/main.cpp.i

CMakeFiles/lab3.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/medgrand/Repositories/MAI_OOP/lab7/src/main.cpp -o CMakeFiles/lab3.dir/src/main.cpp.s

# Object files for target lab3
lab3_OBJECTS = \
"CMakeFiles/lab3.dir/src/Factory.cpp.o" \
"CMakeFiles/lab3.dir/src/Observer.cpp.o" \
"CMakeFiles/lab3.dir/src/Visitor.cpp.o" \
"CMakeFiles/lab3.dir/src/Scene.cpp.o" \
"CMakeFiles/lab3.dir/src/NPC.cpp.o" \
"CMakeFiles/lab3.dir/src/main.cpp.o"

# External object files for target lab3
lab3_EXTERNAL_OBJECTS =

lab3: CMakeFiles/lab3.dir/src/Factory.cpp.o
lab3: CMakeFiles/lab3.dir/src/Observer.cpp.o
lab3: CMakeFiles/lab3.dir/src/Visitor.cpp.o
lab3: CMakeFiles/lab3.dir/src/Scene.cpp.o
lab3: CMakeFiles/lab3.dir/src/NPC.cpp.o
lab3: CMakeFiles/lab3.dir/src/main.cpp.o
lab3: CMakeFiles/lab3.dir/build.make
lab3: CMakeFiles/lab3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable lab3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab3.dir/build: lab3
.PHONY : CMakeFiles/lab3.dir/build

CMakeFiles/lab3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab3.dir/clean

CMakeFiles/lab3.dir/depend:
	cd /home/medgrand/Repositories/MAI_OOP/lab7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/medgrand/Repositories/MAI_OOP/lab7 /home/medgrand/Repositories/MAI_OOP/lab7 /home/medgrand/Repositories/MAI_OOP/lab7/build /home/medgrand/Repositories/MAI_OOP/lab7/build /home/medgrand/Repositories/MAI_OOP/lab7/build/CMakeFiles/lab3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab3.dir/depend

