# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/jonas/Desktop/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jonas/Desktop/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jonas/git/ControlSystems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jonas/git/ControlSystems/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ControlSystems.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ControlSystems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ControlSystems.dir/flags.make

CMakeFiles/ControlSystems.dir/main.c.o: CMakeFiles/ControlSystems.dir/flags.make
CMakeFiles/ControlSystems.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonas/git/ControlSystems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ControlSystems.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ControlSystems.dir/main.c.o   -c /home/jonas/git/ControlSystems/main.c

CMakeFiles/ControlSystems.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ControlSystems.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jonas/git/ControlSystems/main.c > CMakeFiles/ControlSystems.dir/main.c.i

CMakeFiles/ControlSystems.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ControlSystems.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jonas/git/ControlSystems/main.c -o CMakeFiles/ControlSystems.dir/main.c.s

CMakeFiles/ControlSystems.dir/main.c.o.requires:

.PHONY : CMakeFiles/ControlSystems.dir/main.c.o.requires

CMakeFiles/ControlSystems.dir/main.c.o.provides: CMakeFiles/ControlSystems.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/ControlSystems.dir/build.make CMakeFiles/ControlSystems.dir/main.c.o.provides.build
.PHONY : CMakeFiles/ControlSystems.dir/main.c.o.provides

CMakeFiles/ControlSystems.dir/main.c.o.provides.build: CMakeFiles/ControlSystems.dir/main.c.o


CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o: CMakeFiles/ControlSystems.dir/flags.make
CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o: ../hybridsysteminspector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonas/git/ControlSystems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o   -c /home/jonas/git/ControlSystems/hybridsysteminspector.c

CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jonas/git/ControlSystems/hybridsysteminspector.c > CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.i

CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jonas/git/ControlSystems/hybridsysteminspector.c -o CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.s

CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.requires:

.PHONY : CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.requires

CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.provides: CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.requires
	$(MAKE) -f CMakeFiles/ControlSystems.dir/build.make CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.provides.build
.PHONY : CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.provides

CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.provides.build: CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o


# Object files for target ControlSystems
ControlSystems_OBJECTS = \
"CMakeFiles/ControlSystems.dir/main.c.o" \
"CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o"

# External object files for target ControlSystems
ControlSystems_EXTERNAL_OBJECTS =

ControlSystems: CMakeFiles/ControlSystems.dir/main.c.o
ControlSystems: CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o
ControlSystems: CMakeFiles/ControlSystems.dir/build.make
ControlSystems: CMakeFiles/ControlSystems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jonas/git/ControlSystems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ControlSystems"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ControlSystems.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ControlSystems.dir/build: ControlSystems

.PHONY : CMakeFiles/ControlSystems.dir/build

CMakeFiles/ControlSystems.dir/requires: CMakeFiles/ControlSystems.dir/main.c.o.requires
CMakeFiles/ControlSystems.dir/requires: CMakeFiles/ControlSystems.dir/hybridsysteminspector.c.o.requires

.PHONY : CMakeFiles/ControlSystems.dir/requires

CMakeFiles/ControlSystems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ControlSystems.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ControlSystems.dir/clean

CMakeFiles/ControlSystems.dir/depend:
	cd /home/jonas/git/ControlSystems/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jonas/git/ControlSystems /home/jonas/git/ControlSystems /home/jonas/git/ControlSystems/cmake-build-debug /home/jonas/git/ControlSystems/cmake-build-debug /home/jonas/git/ControlSystems/cmake-build-debug/CMakeFiles/ControlSystems.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ControlSystems.dir/depend

