# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.31.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.31.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Calendar.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Calendar.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calendar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calendar.dir/flags.make

Calendar_autogen/timestamp: /Users/artembelcikova/Qt/6.8.2/macos/libexec/moc
Calendar_autogen/timestamp: /Users/artembelcikova/Qt/6.8.2/macos/libexec/uic
Calendar_autogen/timestamp: CMakeFiles/Calendar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Calendar"
	/opt/homebrew/Cellar/cmake/3.31.5/bin/cmake -E cmake_autogen /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Calendar_autogen.dir/AutogenInfo.json Debug
	/opt/homebrew/Cellar/cmake/3.31.5/bin/cmake -E touch /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Calendar_autogen/timestamp

CMakeFiles/Calendar.dir/codegen:
.PHONY : CMakeFiles/Calendar.dir/codegen

CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o: Calendar_autogen/mocs_compilation.cpp
CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o: CMakeFiles/Calendar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o -c /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Calendar_autogen/mocs_compilation.cpp

CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Calendar_autogen/mocs_compilation.cpp > CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.i

CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Calendar_autogen/mocs_compilation.cpp -o CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.s

CMakeFiles/Calendar.dir/main.cpp.o: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/main.cpp.o: /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/main.cpp
CMakeFiles/Calendar.dir/main.cpp.o: CMakeFiles/Calendar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Calendar.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calendar.dir/main.cpp.o -MF CMakeFiles/Calendar.dir/main.cpp.o.d -o CMakeFiles/Calendar.dir/main.cpp.o -c /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/main.cpp

CMakeFiles/Calendar.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Calendar.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/main.cpp > CMakeFiles/Calendar.dir/main.cpp.i

CMakeFiles/Calendar.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Calendar.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/main.cpp -o CMakeFiles/Calendar.dir/main.cpp.s

CMakeFiles/Calendar.dir/mainwindow.cpp.o: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/mainwindow.cpp.o: /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/mainwindow.cpp
CMakeFiles/Calendar.dir/mainwindow.cpp.o: CMakeFiles/Calendar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Calendar.dir/mainwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calendar.dir/mainwindow.cpp.o -MF CMakeFiles/Calendar.dir/mainwindow.cpp.o.d -o CMakeFiles/Calendar.dir/mainwindow.cpp.o -c /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/mainwindow.cpp

CMakeFiles/Calendar.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Calendar.dir/mainwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/mainwindow.cpp > CMakeFiles/Calendar.dir/mainwindow.cpp.i

CMakeFiles/Calendar.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Calendar.dir/mainwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/mainwindow.cpp -o CMakeFiles/Calendar.dir/mainwindow.cpp.s

CMakeFiles/Calendar.dir/date.cpp.o: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/date.cpp.o: /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/date.cpp
CMakeFiles/Calendar.dir/date.cpp.o: CMakeFiles/Calendar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Calendar.dir/date.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calendar.dir/date.cpp.o -MF CMakeFiles/Calendar.dir/date.cpp.o.d -o CMakeFiles/Calendar.dir/date.cpp.o -c /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/date.cpp

CMakeFiles/Calendar.dir/date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Calendar.dir/date.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/date.cpp > CMakeFiles/Calendar.dir/date.cpp.i

CMakeFiles/Calendar.dir/date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Calendar.dir/date.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/date.cpp -o CMakeFiles/Calendar.dir/date.cpp.s

# Object files for target Calendar
Calendar_OBJECTS = \
"CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Calendar.dir/main.cpp.o" \
"CMakeFiles/Calendar.dir/mainwindow.cpp.o" \
"CMakeFiles/Calendar.dir/date.cpp.o"

# External object files for target Calendar
Calendar_EXTERNAL_OBJECTS =

Calendar.app/Contents/MacOS/Calendar: CMakeFiles/Calendar.dir/Calendar_autogen/mocs_compilation.cpp.o
Calendar.app/Contents/MacOS/Calendar: CMakeFiles/Calendar.dir/main.cpp.o
Calendar.app/Contents/MacOS/Calendar: CMakeFiles/Calendar.dir/mainwindow.cpp.o
Calendar.app/Contents/MacOS/Calendar: CMakeFiles/Calendar.dir/date.cpp.o
Calendar.app/Contents/MacOS/Calendar: CMakeFiles/Calendar.dir/build.make
Calendar.app/Contents/MacOS/Calendar: /Users/artembelcikova/Qt/6.8.2/macos/lib/QtWidgets.framework/Versions/A/QtWidgets
Calendar.app/Contents/MacOS/Calendar: /Users/artembelcikova/Qt/6.8.2/macos/lib/QtGui.framework/Versions/A/QtGui
Calendar.app/Contents/MacOS/Calendar: /Users/artembelcikova/Qt/6.8.2/macos/lib/QtCore.framework/Versions/A/QtCore
Calendar.app/Contents/MacOS/Calendar: CMakeFiles/Calendar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Calendar.app/Contents/MacOS/Calendar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Calendar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calendar.dir/build: Calendar.app/Contents/MacOS/Calendar
.PHONY : CMakeFiles/Calendar.dir/build

CMakeFiles/Calendar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Calendar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Calendar.dir/clean

CMakeFiles/Calendar.dir/depend: Calendar_autogen/timestamp
	cd /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/artembelcikova/Documents/453501/ОАиП_2/Lr_2/task1/Calendar/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Calendar.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Calendar.dir/depend

