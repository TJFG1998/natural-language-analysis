# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/tiago/CLion-2019.3.5/clion-2019.3.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tiago/CLion-2019.3.5/clion-2019.3.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tiago/workspace/TPAEDII

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tiago/workspace/TPAEDII/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TPAEDII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TPAEDII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TPAEDII.dir/flags.make

CMakeFiles/TPAEDII.dir/main.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TPAEDII.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/main.c.o   -c /home/tiago/workspace/TPAEDII/main.c

CMakeFiles/TPAEDII.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/main.c > CMakeFiles/TPAEDII.dir/main.c.i

CMakeFiles/TPAEDII.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/main.c -o CMakeFiles/TPAEDII.dir/main.c.s

CMakeFiles/TPAEDII.dir/src/models/line.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/models/line.c.o: ../src/models/line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TPAEDII.dir/src/models/line.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/models/line.c.o   -c /home/tiago/workspace/TPAEDII/src/models/line.c

CMakeFiles/TPAEDII.dir/src/models/line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/models/line.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/models/line.c > CMakeFiles/TPAEDII.dir/src/models/line.c.i

CMakeFiles/TPAEDII.dir/src/models/line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/models/line.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/models/line.c -o CMakeFiles/TPAEDII.dir/src/models/line.c.s

CMakeFiles/TPAEDII.dir/src/models/word.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/models/word.c.o: ../src/models/word.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TPAEDII.dir/src/models/word.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/models/word.c.o   -c /home/tiago/workspace/TPAEDII/src/models/word.c

CMakeFiles/TPAEDII.dir/src/models/word.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/models/word.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/models/word.c > CMakeFiles/TPAEDII.dir/src/models/word.c.i

CMakeFiles/TPAEDII.dir/src/models/word.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/models/word.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/models/word.c -o CMakeFiles/TPAEDII.dir/src/models/word.c.s

CMakeFiles/TPAEDII.dir/src/models/size.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/models/size.c.o: ../src/models/size.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/TPAEDII.dir/src/models/size.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/models/size.c.o   -c /home/tiago/workspace/TPAEDII/src/models/size.c

CMakeFiles/TPAEDII.dir/src/models/size.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/models/size.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/models/size.c > CMakeFiles/TPAEDII.dir/src/models/size.c.i

CMakeFiles/TPAEDII.dir/src/models/size.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/models/size.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/models/size.c -o CMakeFiles/TPAEDII.dir/src/models/size.c.s

CMakeFiles/TPAEDII.dir/src/models/root.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/models/root.c.o: ../src/models/root.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/TPAEDII.dir/src/models/root.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/models/root.c.o   -c /home/tiago/workspace/TPAEDII/src/models/root.c

CMakeFiles/TPAEDII.dir/src/models/root.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/models/root.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/models/root.c > CMakeFiles/TPAEDII.dir/src/models/root.c.i

CMakeFiles/TPAEDII.dir/src/models/root.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/models/root.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/models/root.c -o CMakeFiles/TPAEDII.dir/src/models/root.c.s

CMakeFiles/TPAEDII.dir/src/models/morpho.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/models/morpho.c.o: ../src/models/morpho.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/TPAEDII.dir/src/models/morpho.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/models/morpho.c.o   -c /home/tiago/workspace/TPAEDII/src/models/morpho.c

CMakeFiles/TPAEDII.dir/src/models/morpho.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/models/morpho.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/models/morpho.c > CMakeFiles/TPAEDII.dir/src/models/morpho.c.i

CMakeFiles/TPAEDII.dir/src/models/morpho.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/models/morpho.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/models/morpho.c -o CMakeFiles/TPAEDII.dir/src/models/morpho.c.s

CMakeFiles/TPAEDII.dir/src/models/certainty.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/models/certainty.c.o: ../src/models/certainty.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/TPAEDII.dir/src/models/certainty.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/models/certainty.c.o   -c /home/tiago/workspace/TPAEDII/src/models/certainty.c

CMakeFiles/TPAEDII.dir/src/models/certainty.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/models/certainty.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/models/certainty.c > CMakeFiles/TPAEDII.dir/src/models/certainty.c.i

CMakeFiles/TPAEDII.dir/src/models/certainty.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/models/certainty.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/models/certainty.c -o CMakeFiles/TPAEDII.dir/src/models/certainty.c.s

CMakeFiles/TPAEDII.dir/src/parser.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/parser.c.o: ../src/parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/TPAEDII.dir/src/parser.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/parser.c.o   -c /home/tiago/workspace/TPAEDII/src/parser.c

CMakeFiles/TPAEDII.dir/src/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/parser.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/parser.c > CMakeFiles/TPAEDII.dir/src/parser.c.i

CMakeFiles/TPAEDII.dir/src/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/parser.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/parser.c -o CMakeFiles/TPAEDII.dir/src/parser.c.s

CMakeFiles/TPAEDII.dir/src/histogram.c.o: CMakeFiles/TPAEDII.dir/flags.make
CMakeFiles/TPAEDII.dir/src/histogram.c.o: ../src/histogram.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/TPAEDII.dir/src/histogram.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPAEDII.dir/src/histogram.c.o   -c /home/tiago/workspace/TPAEDII/src/histogram.c

CMakeFiles/TPAEDII.dir/src/histogram.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPAEDII.dir/src/histogram.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tiago/workspace/TPAEDII/src/histogram.c > CMakeFiles/TPAEDII.dir/src/histogram.c.i

CMakeFiles/TPAEDII.dir/src/histogram.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPAEDII.dir/src/histogram.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tiago/workspace/TPAEDII/src/histogram.c -o CMakeFiles/TPAEDII.dir/src/histogram.c.s

# Object files for target TPAEDII
TPAEDII_OBJECTS = \
"CMakeFiles/TPAEDII.dir/main.c.o" \
"CMakeFiles/TPAEDII.dir/src/models/line.c.o" \
"CMakeFiles/TPAEDII.dir/src/models/word.c.o" \
"CMakeFiles/TPAEDII.dir/src/models/size.c.o" \
"CMakeFiles/TPAEDII.dir/src/models/root.c.o" \
"CMakeFiles/TPAEDII.dir/src/models/morpho.c.o" \
"CMakeFiles/TPAEDII.dir/src/models/certainty.c.o" \
"CMakeFiles/TPAEDII.dir/src/parser.c.o" \
"CMakeFiles/TPAEDII.dir/src/histogram.c.o"

# External object files for target TPAEDII
TPAEDII_EXTERNAL_OBJECTS =

TPAEDII: CMakeFiles/TPAEDII.dir/main.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/models/line.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/models/word.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/models/size.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/models/root.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/models/morpho.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/models/certainty.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/parser.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/src/histogram.c.o
TPAEDII: CMakeFiles/TPAEDII.dir/build.make
TPAEDII: CMakeFiles/TPAEDII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable TPAEDII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TPAEDII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TPAEDII.dir/build: TPAEDII

.PHONY : CMakeFiles/TPAEDII.dir/build

CMakeFiles/TPAEDII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TPAEDII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TPAEDII.dir/clean

CMakeFiles/TPAEDII.dir/depend:
	cd /home/tiago/workspace/TPAEDII/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tiago/workspace/TPAEDII /home/tiago/workspace/TPAEDII /home/tiago/workspace/TPAEDII/cmake-build-debug /home/tiago/workspace/TPAEDII/cmake-build-debug /home/tiago/workspace/TPAEDII/cmake-build-debug/CMakeFiles/TPAEDII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TPAEDII.dir/depend

