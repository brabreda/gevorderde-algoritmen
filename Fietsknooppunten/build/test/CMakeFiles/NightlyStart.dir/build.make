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
CMAKE_SOURCE_DIR = "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build"

# Utility rule file for NightlyStart.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/NightlyStart.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/NightlyStart.dir/progress.make

test/CMakeFiles/NightlyStart:
	cd "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build/test" && /usr/bin/ctest -D NightlyStart

NightlyStart: test/CMakeFiles/NightlyStart
NightlyStart: test/CMakeFiles/NightlyStart.dir/build.make
.PHONY : NightlyStart

# Rule to build all files generated by this target.
test/CMakeFiles/NightlyStart.dir/build: NightlyStart
.PHONY : test/CMakeFiles/NightlyStart.dir/build

test/CMakeFiles/NightlyStart.dir/clean:
	cd "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build/test" && $(CMAKE_COMMAND) -P CMakeFiles/NightlyStart.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/NightlyStart.dir/clean

test/CMakeFiles/NightlyStart.dir/depend:
	cd "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten" "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/test" "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build" "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build/test" "/home/bram/Documents/gevorderde algoritmen/Fietsknooppunten/build/test/CMakeFiles/NightlyStart.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : test/CMakeFiles/NightlyStart.dir/depend

