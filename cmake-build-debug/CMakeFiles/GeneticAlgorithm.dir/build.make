# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/david/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/david/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GeneticAlgorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GeneticAlgorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GeneticAlgorithm.dir/flags.make

CMakeFiles/GeneticAlgorithm.dir/main.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/main.cpp.o"
	C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/main.cpp.o -c /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/main.cpp

CMakeFiles/GeneticAlgorithm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/main.cpp.i"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/main.cpp > CMakeFiles/GeneticAlgorithm.dir/main.cpp.i

CMakeFiles/GeneticAlgorithm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/main.cpp.s"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/main.cpp -o CMakeFiles/GeneticAlgorithm.dir/main.cpp.s

CMakeFiles/GeneticAlgorithm.dir/city.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/city.cpp.o: ../city.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/city.cpp.o"
	C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/city.cpp.o -c /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/city.cpp

CMakeFiles/GeneticAlgorithm.dir/city.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/city.cpp.i"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/city.cpp > CMakeFiles/GeneticAlgorithm.dir/city.cpp.i

CMakeFiles/GeneticAlgorithm.dir/city.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/city.cpp.s"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/city.cpp -o CMakeFiles/GeneticAlgorithm.dir/city.cpp.s

CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o: ../tour.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o"
	C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o -c /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/tour.cpp

CMakeFiles/GeneticAlgorithm.dir/tour.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/tour.cpp.i"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/tour.cpp > CMakeFiles/GeneticAlgorithm.dir/tour.cpp.i

CMakeFiles/GeneticAlgorithm.dir/tour.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/tour.cpp.s"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/tour.cpp -o CMakeFiles/GeneticAlgorithm.dir/tour.cpp.s

CMakeFiles/GeneticAlgorithm.dir/population.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/population.cpp.o: ../population.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/population.cpp.o"
	C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/population.cpp.o -c /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/population.cpp

CMakeFiles/GeneticAlgorithm.dir/population.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/population.cpp.i"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/population.cpp > CMakeFiles/GeneticAlgorithm.dir/population.cpp.i

CMakeFiles/GeneticAlgorithm.dir/population.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/population.cpp.s"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/population.cpp -o CMakeFiles/GeneticAlgorithm.dir/population.cpp.s

CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.o: ../generic_algorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.o"
	C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.o -c /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/generic_algorithm.cpp

CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.i"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/generic_algorithm.cpp > CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.i

CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.s"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/generic_algorithm.cpp -o CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.s

# Object files for target GeneticAlgorithm
GeneticAlgorithm_OBJECTS = \
"CMakeFiles/GeneticAlgorithm.dir/main.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/city.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/population.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.o"

# External object files for target GeneticAlgorithm
GeneticAlgorithm_EXTERNAL_OBJECTS =

GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/main.cpp.o
GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/city.cpp.o
GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o
GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/population.cpp.o
GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/generic_algorithm.cpp.o
GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/build.make
GeneticAlgorithm.exe: CMakeFiles/GeneticAlgorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable GeneticAlgorithm.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GeneticAlgorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GeneticAlgorithm.dir/build: GeneticAlgorithm.exe

.PHONY : CMakeFiles/GeneticAlgorithm.dir/build

CMakeFiles/GeneticAlgorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GeneticAlgorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GeneticAlgorithm.dir/clean

CMakeFiles/GeneticAlgorithm.dir/depend:
	cd /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug /cygdrive/c/Users/david/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles/GeneticAlgorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GeneticAlgorithm.dir/depend

