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
CMAKE_SOURCE_DIR = "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build"

# Include any dependencies generated for this target.
include CMakeFiles/kruskal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/kruskal.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/kruskal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kruskal.dir/flags.make

CMakeFiles/kruskal.dir/src/main.cpp.o: CMakeFiles/kruskal.dir/flags.make
CMakeFiles/kruskal.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/kruskal.dir/src/main.cpp.o: CMakeFiles/kruskal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kruskal.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/kruskal.dir/src/main.cpp.o -MF CMakeFiles/kruskal.dir/src/main.cpp.o.d -o CMakeFiles/kruskal.dir/src/main.cpp.o -c "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/src/main.cpp"

CMakeFiles/kruskal.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kruskal.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/src/main.cpp" > CMakeFiles/kruskal.dir/src/main.cpp.i

CMakeFiles/kruskal.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kruskal.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/src/main.cpp" -o CMakeFiles/kruskal.dir/src/main.cpp.s

CMakeFiles/kruskal.dir/src/graaf.cpp.o: CMakeFiles/kruskal.dir/flags.make
CMakeFiles/kruskal.dir/src/graaf.cpp.o: ../src/graaf.cpp
CMakeFiles/kruskal.dir/src/graaf.cpp.o: CMakeFiles/kruskal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/kruskal.dir/src/graaf.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/kruskal.dir/src/graaf.cpp.o -MF CMakeFiles/kruskal.dir/src/graaf.cpp.o.d -o CMakeFiles/kruskal.dir/src/graaf.cpp.o -c "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/src/graaf.cpp"

CMakeFiles/kruskal.dir/src/graaf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kruskal.dir/src/graaf.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/src/graaf.cpp" > CMakeFiles/kruskal.dir/src/graaf.cpp.i

CMakeFiles/kruskal.dir/src/graaf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kruskal.dir/src/graaf.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/src/graaf.cpp" -o CMakeFiles/kruskal.dir/src/graaf.cpp.s

# Object files for target kruskal
kruskal_OBJECTS = \
"CMakeFiles/kruskal.dir/src/main.cpp.o" \
"CMakeFiles/kruskal.dir/src/graaf.cpp.o"

# External object files for target kruskal
kruskal_EXTERNAL_OBJECTS =

kruskal: CMakeFiles/kruskal.dir/src/main.cpp.o
kruskal: CMakeFiles/kruskal.dir/src/graaf.cpp.o
kruskal: CMakeFiles/kruskal.dir/build.make
kruskal: CMakeFiles/kruskal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable kruskal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kruskal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kruskal.dir/build: kruskal
.PHONY : CMakeFiles/kruskal.dir/build

CMakeFiles/kruskal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kruskal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kruskal.dir/clean

CMakeFiles/kruskal.dir/depend:
	cd "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal" "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal" "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build" "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build" "/home/bram/Documents/school/gevorderde algoritmen/oefeningen theorie/kruskal/build/CMakeFiles/kruskal.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/kruskal.dir/depend

