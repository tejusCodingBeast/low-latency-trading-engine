# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nigelsaurino/Github/low-latency-trading-engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nigelsaurino/Github/low-latency-trading-engine/build

# Include any dependencies generated for this target.
include CMakeFiles/Trading_Engine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Trading_Engine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Trading_Engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Trading_Engine.dir/flags.make

CMakeFiles/Trading_Engine.dir/main.cpp.o: CMakeFiles/Trading_Engine.dir/flags.make
CMakeFiles/Trading_Engine.dir/main.cpp.o: /Users/nigelsaurino/Github/low-latency-trading-engine/main.cpp
CMakeFiles/Trading_Engine.dir/main.cpp.o: CMakeFiles/Trading_Engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/nigelsaurino/Github/low-latency-trading-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Trading_Engine.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Trading_Engine.dir/main.cpp.o -MF CMakeFiles/Trading_Engine.dir/main.cpp.o.d -o CMakeFiles/Trading_Engine.dir/main.cpp.o -c /Users/nigelsaurino/Github/low-latency-trading-engine/main.cpp

CMakeFiles/Trading_Engine.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Trading_Engine.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nigelsaurino/Github/low-latency-trading-engine/main.cpp > CMakeFiles/Trading_Engine.dir/main.cpp.i

CMakeFiles/Trading_Engine.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Trading_Engine.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nigelsaurino/Github/low-latency-trading-engine/main.cpp -o CMakeFiles/Trading_Engine.dir/main.cpp.s

# Object files for target Trading_Engine
Trading_Engine_OBJECTS = \
"CMakeFiles/Trading_Engine.dir/main.cpp.o"

# External object files for target Trading_Engine
Trading_Engine_EXTERNAL_OBJECTS =

Trading_Engine: CMakeFiles/Trading_Engine.dir/main.cpp.o
Trading_Engine: CMakeFiles/Trading_Engine.dir/build.make
Trading_Engine: libDog.a
Trading_Engine: CMakeFiles/Trading_Engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/nigelsaurino/Github/low-latency-trading-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Trading_Engine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Trading_Engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Trading_Engine.dir/build: Trading_Engine
.PHONY : CMakeFiles/Trading_Engine.dir/build

CMakeFiles/Trading_Engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Trading_Engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Trading_Engine.dir/clean

CMakeFiles/Trading_Engine.dir/depend:
	cd /Users/nigelsaurino/Github/low-latency-trading-engine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nigelsaurino/Github/low-latency-trading-engine /Users/nigelsaurino/Github/low-latency-trading-engine /Users/nigelsaurino/Github/low-latency-trading-engine/build /Users/nigelsaurino/Github/low-latency-trading-engine/build /Users/nigelsaurino/Github/low-latency-trading-engine/build/CMakeFiles/Trading_Engine.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Trading_Engine.dir/depend

