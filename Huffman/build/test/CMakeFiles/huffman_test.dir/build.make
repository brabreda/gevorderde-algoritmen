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
include test/CMakeFiles/huffman_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/huffman_test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/huffman_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/huffman_test.dir/flags.make

test/CMakeFiles/huffman_test.dir/test.cpp.o: test/CMakeFiles/huffman_test.dir/flags.make
test/CMakeFiles/huffman_test.dir/test.cpp.o: ../test/test.cpp
test/CMakeFiles/huffman_test.dir/test.cpp.o: test/CMakeFiles/huffman_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/huffman_test.dir/test.cpp.o"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/huffman_test.dir/test.cpp.o -MF CMakeFiles/huffman_test.dir/test.cpp.o.d -o CMakeFiles/huffman_test.dir/test.cpp.o -c "/home/bram/Documents/school/gevorderde algoritmen/Huffman/test/test.cpp"

test/CMakeFiles/huffman_test.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman_test.dir/test.cpp.i"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bram/Documents/school/gevorderde algoritmen/Huffman/test/test.cpp" > CMakeFiles/huffman_test.dir/test.cpp.i

test/CMakeFiles/huffman_test.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman_test.dir/test.cpp.s"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bram/Documents/school/gevorderde algoritmen/Huffman/test/test.cpp" -o CMakeFiles/huffman_test.dir/test.cpp.s

test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o: test/CMakeFiles/huffman_test.dir/flags.make
test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o: ../src/huffman.cpp
test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o: test/CMakeFiles/huffman_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o -MF CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o.d -o CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o -c "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/huffman.cpp"

test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman_test.dir/__/src/huffman.cpp.i"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/huffman.cpp" > CMakeFiles/huffman_test.dir/__/src/huffman.cpp.i

test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman_test.dir/__/src/huffman.cpp.s"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bram/Documents/school/gevorderde algoritmen/Huffman/src/huffman.cpp" -o CMakeFiles/huffman_test.dir/__/src/huffman.cpp.s

# Object files for target huffman_test
huffman_test_OBJECTS = \
"CMakeFiles/huffman_test.dir/test.cpp.o" \
"CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o"

# External object files for target huffman_test
huffman_test_EXTERNAL_OBJECTS =

test/huffman_test: test/CMakeFiles/huffman_test.dir/test.cpp.o
test/huffman_test: test/CMakeFiles/huffman_test.dir/__/src/huffman.cpp.o
test/huffman_test: test/CMakeFiles/huffman_test.dir/build.make
test/huffman_test: libbitstream.so
test/huffman_test: test/CMakeFiles/huffman_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable huffman_test"
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/huffman_test.dir/link.txt --verbose=$(VERBOSE)
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && /usr/bin/cmake -D TEST_TARGET=huffman_test -D "TEST_EXECUTABLE=/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/huffman_test" -D TEST_EXECUTOR= -D "TEST_WORKING_DIR=/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" -D TEST_SPEC= -D "TEST_EXTRA_ARGS=-o;report.xml;-s;-r;junit" -D TEST_PROPERTIES= -D TEST_ADD_LABELS= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_LIST=huffman_test_TESTS -D TEST_JUNIT_OUTPUT_DIR= -D "CTEST_FILE=/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/huffman_test_tests-ef3fd9b.cmake" -P "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/_deps/doctest-src/scripts/cmake/doctestAddTests.cmake"

# Rule to build all files generated by this target.
test/CMakeFiles/huffman_test.dir/build: test/huffman_test
.PHONY : test/CMakeFiles/huffman_test.dir/build

test/CMakeFiles/huffman_test.dir/clean:
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" && $(CMAKE_COMMAND) -P CMakeFiles/huffman_test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/huffman_test.dir/clean

test/CMakeFiles/huffman_test.dir/depend:
	cd "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bram/Documents/school/gevorderde algoritmen/Huffman" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/test" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test" "/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/CMakeFiles/huffman_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : test/CMakeFiles/huffman_test.dir/depend

