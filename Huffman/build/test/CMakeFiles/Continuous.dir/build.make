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
CMAKE_SOURCE_DIR = "/home/bram/Documents/school/gevorderde algoritmen/Huffman"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build"

# Utility rule file for Continuous.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/Continuous.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/Continuous.dir/progress.make

test/CMakeFiles/Continuous:
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/ctest -D Continuous

Continuous: test/CMakeFiles/Continuous
Continuous: test/CMakeFiles/Continuous.dir/build.make
.PHONY : Continuous

# Rule to build all files generated by this target.
test/CMakeFiles/Continuous.dir/build: Continuous
.PHONY : test/CMakeFiles/Continuous.dir/build

test/CMakeFiles/Continuous.dir/clean:
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && $(CMAKE_COMMAND) -P CMakeFiles/Continuous.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/Continuous.dir/clean

test/CMakeFiles/Continuous.dir/depend:
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bram/Documents/school/gevorderde algoritmen/Huffman" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/test" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/CMakeFiles/Continuous.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : test/CMakeFiles/Continuous.dir/depend
