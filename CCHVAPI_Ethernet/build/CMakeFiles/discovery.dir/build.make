# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nxb/gigecam_linux/CCHVAPI_Ethernet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build

# Include any dependencies generated for this target.
include CMakeFiles/discovery.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/discovery.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/discovery.dir/flags.make

CMakeFiles/discovery.dir/DeviceGVCP.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/DeviceGVCP.cpp.o: ../DeviceGVCP.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/DeviceGVCP.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/DeviceGVCP.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/DeviceGVCP.cpp

CMakeFiles/discovery.dir/DeviceGVCP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/DeviceGVCP.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/DeviceGVCP.cpp > CMakeFiles/discovery.dir/DeviceGVCP.cpp.i

CMakeFiles/discovery.dir/DeviceGVCP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/DeviceGVCP.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/DeviceGVCP.cpp -o CMakeFiles/discovery.dir/DeviceGVCP.cpp.s

CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.requires

CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.provides: CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.provides

CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.provides.build: CMakeFiles/discovery.dir/DeviceGVCP.cpp.o

CMakeFiles/discovery.dir/CCHVAPI.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/CCHVAPI.cpp.o: ../CCHVAPI.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/CCHVAPI.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/CCHVAPI.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/CCHVAPI.cpp

CMakeFiles/discovery.dir/CCHVAPI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/CCHVAPI.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/CCHVAPI.cpp > CMakeFiles/discovery.dir/CCHVAPI.cpp.i

CMakeFiles/discovery.dir/CCHVAPI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/CCHVAPI.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/CCHVAPI.cpp -o CMakeFiles/discovery.dir/CCHVAPI.cpp.s

CMakeFiles/discovery.dir/CCHVAPI.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/CCHVAPI.cpp.o.requires

CMakeFiles/discovery.dir/CCHVAPI.cpp.o.provides: CMakeFiles/discovery.dir/CCHVAPI.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/CCHVAPI.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/CCHVAPI.cpp.o.provides

CMakeFiles/discovery.dir/CCHVAPI.cpp.o.provides.build: CMakeFiles/discovery.dir/CCHVAPI.cpp.o

CMakeFiles/discovery.dir/GigEDataProcess.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/GigEDataProcess.cpp.o: ../GigEDataProcess.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/GigEDataProcess.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/GigEDataProcess.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/GigEDataProcess.cpp

CMakeFiles/discovery.dir/GigEDataProcess.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/GigEDataProcess.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/GigEDataProcess.cpp > CMakeFiles/discovery.dir/GigEDataProcess.cpp.i

CMakeFiles/discovery.dir/GigEDataProcess.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/GigEDataProcess.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/GigEDataProcess.cpp -o CMakeFiles/discovery.dir/GigEDataProcess.cpp.s

CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.requires

CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.provides: CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.provides

CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.provides.build: CMakeFiles/discovery.dir/GigEDataProcess.cpp.o

CMakeFiles/discovery.dir/main.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/main.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/main.cpp

CMakeFiles/discovery.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/main.cpp > CMakeFiles/discovery.dir/main.cpp.i

CMakeFiles/discovery.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/main.cpp -o CMakeFiles/discovery.dir/main.cpp.s

CMakeFiles/discovery.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/main.cpp.o.requires

CMakeFiles/discovery.dir/main.cpp.o.provides: CMakeFiles/discovery.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/main.cpp.o.provides

CMakeFiles/discovery.dir/main.cpp.o.provides.build: CMakeFiles/discovery.dir/main.cpp.o

CMakeFiles/discovery.dir/wqueue.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/wqueue.cpp.o: ../wqueue.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/wqueue.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/wqueue.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/wqueue.cpp

CMakeFiles/discovery.dir/wqueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/wqueue.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/wqueue.cpp > CMakeFiles/discovery.dir/wqueue.cpp.i

CMakeFiles/discovery.dir/wqueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/wqueue.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/wqueue.cpp -o CMakeFiles/discovery.dir/wqueue.cpp.s

CMakeFiles/discovery.dir/wqueue.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/wqueue.cpp.o.requires

CMakeFiles/discovery.dir/wqueue.cpp.o.provides: CMakeFiles/discovery.dir/wqueue.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/wqueue.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/wqueue.cpp.o.provides

CMakeFiles/discovery.dir/wqueue.cpp.o.provides.build: CMakeFiles/discovery.dir/wqueue.cpp.o

CMakeFiles/discovery.dir/clientProp.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/clientProp.cpp.o: ../clientProp.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/clientProp.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/clientProp.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/clientProp.cpp

CMakeFiles/discovery.dir/clientProp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/clientProp.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/clientProp.cpp > CMakeFiles/discovery.dir/clientProp.cpp.i

CMakeFiles/discovery.dir/clientProp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/clientProp.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/clientProp.cpp -o CMakeFiles/discovery.dir/clientProp.cpp.s

CMakeFiles/discovery.dir/clientProp.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/clientProp.cpp.o.requires

CMakeFiles/discovery.dir/clientProp.cpp.o.provides: CMakeFiles/discovery.dir/clientProp.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/clientProp.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/clientProp.cpp.o.provides

CMakeFiles/discovery.dir/clientProp.cpp.o.provides.build: CMakeFiles/discovery.dir/clientProp.cpp.o

CMakeFiles/discovery.dir/camProp.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/camProp.cpp.o: ../camProp.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/camProp.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/camProp.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/camProp.cpp

CMakeFiles/discovery.dir/camProp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/camProp.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/camProp.cpp > CMakeFiles/discovery.dir/camProp.cpp.i

CMakeFiles/discovery.dir/camProp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/camProp.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/camProp.cpp -o CMakeFiles/discovery.dir/camProp.cpp.s

CMakeFiles/discovery.dir/camProp.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/camProp.cpp.o.requires

CMakeFiles/discovery.dir/camProp.cpp.o.provides: CMakeFiles/discovery.dir/camProp.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/camProp.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/camProp.cpp.o.provides

CMakeFiles/discovery.dir/camProp.cpp.o.provides.build: CMakeFiles/discovery.dir/camProp.cpp.o

CMakeFiles/discovery.dir/TrigImgPack.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/TrigImgPack.cpp.o: ../TrigImgPack.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/TrigImgPack.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/TrigImgPack.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/TrigImgPack.cpp

CMakeFiles/discovery.dir/TrigImgPack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/TrigImgPack.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/TrigImgPack.cpp > CMakeFiles/discovery.dir/TrigImgPack.cpp.i

CMakeFiles/discovery.dir/TrigImgPack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/TrigImgPack.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/TrigImgPack.cpp -o CMakeFiles/discovery.dir/TrigImgPack.cpp.s

CMakeFiles/discovery.dir/TrigImgPack.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/TrigImgPack.cpp.o.requires

CMakeFiles/discovery.dir/TrigImgPack.cpp.o.provides: CMakeFiles/discovery.dir/TrigImgPack.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/TrigImgPack.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/TrigImgPack.cpp.o.provides

CMakeFiles/discovery.dir/TrigImgPack.cpp.o.provides.build: CMakeFiles/discovery.dir/TrigImgPack.cpp.o

CMakeFiles/discovery.dir/GigEDataCapture.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/GigEDataCapture.cpp.o: ../GigEDataCapture.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/GigEDataCapture.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/GigEDataCapture.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/GigEDataCapture.cpp

CMakeFiles/discovery.dir/GigEDataCapture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/GigEDataCapture.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/GigEDataCapture.cpp > CMakeFiles/discovery.dir/GigEDataCapture.cpp.i

CMakeFiles/discovery.dir/GigEDataCapture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/GigEDataCapture.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/GigEDataCapture.cpp -o CMakeFiles/discovery.dir/GigEDataCapture.cpp.s

CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.requires

CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.provides: CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.provides

CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.provides.build: CMakeFiles/discovery.dir/GigEDataCapture.cpp.o

CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o: ../Inc/Socket/Socket.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/Socket/Socket.cpp

CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/Socket/Socket.cpp > CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.i

CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/Socket/Socket.cpp -o CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.s

CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.requires

CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.provides: CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.provides

CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o: ../Inc/MV_CrossPlatform/MV_Log.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Log.cpp

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Log.cpp > CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.i

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Log.cpp -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.s

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.requires

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.provides: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.provides

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o: ../Inc/MV_CrossPlatform/MV_Memory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Memory.cpp

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Memory.cpp > CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.i

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Memory.cpp -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.s

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.requires

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.provides: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.provides

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o: ../Inc/MV_CrossPlatform/Linux_Thread.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/Linux_Thread.cpp

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/Linux_Thread.cpp > CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.i

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/Linux_Thread.cpp -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.s

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.requires

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.provides: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.provides

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o: ../Inc/MV_CrossPlatform/Windows_Thread.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/Windows_Thread.cpp

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/Windows_Thread.cpp > CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.i

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/Windows_Thread.cpp -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.s

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.requires

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.provides: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.provides

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o: ../Inc/MV_CrossPlatform/MV_Thread.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Thread.cpp

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Thread.cpp > CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.i

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Thread.cpp -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.s

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.requires

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.provides: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.provides

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o: ../Inc/MV_CrossPlatform/MV_Tools.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles $(CMAKE_PROGRESS_16)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o -c /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Tools.cpp

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Tools.cpp > CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.i

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nxb/gigecam_linux/CCHVAPI_Ethernet/Inc/MV_CrossPlatform/MV_Tools.cpp -o CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.s

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.requires

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.provides: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.provides

CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.provides.build: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o

# Object files for target discovery
discovery_OBJECTS = \
"CMakeFiles/discovery.dir/DeviceGVCP.cpp.o" \
"CMakeFiles/discovery.dir/CCHVAPI.cpp.o" \
"CMakeFiles/discovery.dir/GigEDataProcess.cpp.o" \
"CMakeFiles/discovery.dir/main.cpp.o" \
"CMakeFiles/discovery.dir/wqueue.cpp.o" \
"CMakeFiles/discovery.dir/clientProp.cpp.o" \
"CMakeFiles/discovery.dir/camProp.cpp.o" \
"CMakeFiles/discovery.dir/TrigImgPack.cpp.o" \
"CMakeFiles/discovery.dir/GigEDataCapture.cpp.o" \
"CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o" \
"CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o" \
"CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o" \
"CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o" \
"CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o" \
"CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o" \
"CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o"

# External object files for target discovery
discovery_EXTERNAL_OBJECTS =

discovery: CMakeFiles/discovery.dir/DeviceGVCP.cpp.o
discovery: CMakeFiles/discovery.dir/CCHVAPI.cpp.o
discovery: CMakeFiles/discovery.dir/GigEDataProcess.cpp.o
discovery: CMakeFiles/discovery.dir/main.cpp.o
discovery: CMakeFiles/discovery.dir/wqueue.cpp.o
discovery: CMakeFiles/discovery.dir/clientProp.cpp.o
discovery: CMakeFiles/discovery.dir/camProp.cpp.o
discovery: CMakeFiles/discovery.dir/TrigImgPack.cpp.o
discovery: CMakeFiles/discovery.dir/GigEDataCapture.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o
discovery: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o
discovery: CMakeFiles/discovery.dir/build.make
discovery: CMakeFiles/discovery.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable discovery"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/discovery.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/discovery.dir/build: discovery
.PHONY : CMakeFiles/discovery.dir/build

CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/DeviceGVCP.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/CCHVAPI.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/GigEDataProcess.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/main.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/wqueue.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/clientProp.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/camProp.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/TrigImgPack.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/GigEDataCapture.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/Socket/Socket.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Log.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Memory.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Linux_Thread.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/Windows_Thread.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Thread.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/Inc/MV_CrossPlatform/MV_Tools.cpp.o.requires
.PHONY : CMakeFiles/discovery.dir/requires

CMakeFiles/discovery.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/discovery.dir/cmake_clean.cmake
.PHONY : CMakeFiles/discovery.dir/clean

CMakeFiles/discovery.dir/depend:
	cd /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nxb/gigecam_linux/CCHVAPI_Ethernet /home/nxb/gigecam_linux/CCHVAPI_Ethernet /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build /home/nxb/gigecam_linux/CCHVAPI_Ethernet/build/CMakeFiles/discovery.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/discovery.dir/depend

