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

# Include any dependencies generated for this target.
include CMakeFiles/huffman.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/huffman.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/huffman.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/huffman.dir/flags.make

CMakeFiles/huffman.dir/src/main.cpp.o: CMakeFiles/huffman.dir/flags.make
CMakeFiles/huffman.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/huffman.dir/src/main.cpp.o: CMakeFiles/huffman.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/huffman.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/huffman.dir/src/main.cpp.o -MF CMakeFiles/huffman.dir/src/main.cpp.o.d -o CMakeFiles/huffman.dir/src/main.cpp.o -c "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/main.cpp"

CMakeFiles/huffman.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/main.cpp" > CMakeFiles/huffman.dir/src/main.cpp.i

CMakeFiles/huffman.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/main.cpp" -o CMakeFiles/huffman.dir/src/main.cpp.s

CMakeFiles/huffman.dir/src/huffman.cpp.o: CMakeFiles/huffman.dir/flags.make
CMakeFiles/huffman.dir/src/huffman.cpp.o: ../src/huffman.cpp
CMakeFiles/huffman.dir/src/huffman.cpp.o: CMakeFiles/huffman.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/huffman.dir/src/huffman.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/huffman.dir/src/huffman.cpp.o -MF CMakeFiles/huffman.dir/src/huffman.cpp.o.d -o CMakeFiles/huffman.dir/src/huffman.cpp.o -c "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/huffman.cpp"

CMakeFiles/huffman.dir/src/huffman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman.dir/src/huffman.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/huffman.cpp" > CMakeFiles/huffman.dir/src/huffman.cpp.i

CMakeFiles/huffman.dir/src/huffman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman.dir/src/huffman.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/huffman.cpp" -o CMakeFiles/huffman.dir/src/huffman.cpp.s

# Object files for target huffman
huffman_OBJECTS = \
"CMakeFiles/huffman.dir/src/main.cpp.o" \
"CMakeFiles/huffman.dir/src/huffman.cpp.o"

# External object files for target huffman
huffman_EXTERNAL_OBJECTS =

huffman: CMakeFiles/huffman.dir/src/main.cpp.o
huffman: CMakeFiles/huffman.dir/src/huffman.cpp.o
huffman: CMakeFiles/huffman.dir/build.make
huffman: libbitstream.so
huffman: CMakeFiles/huffman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable huffman"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/huffman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/huffman.dir/build: huffman
.PHONY : CMakeFiles/huffman.dir/build

CMakeFiles/huffman.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/huffman.dir/cmake_clean.cmake
.PHONY : CMakeFiles/huffman.dir/clean

CMakeFiles/huffman.dir/depend:
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bram/Documents/school/gevorderde algoritmen/Huffman" "/home/bram/Documents/school/gevorderde algoritmen/Huffman" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles/huffman.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/huffman.dir/depend
