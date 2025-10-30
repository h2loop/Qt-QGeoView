# Install script for directory: C:/Users/vedan/Desktop/Qt/Qt-QGeoView

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/QGeoView")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Qt/Tools/mingw1310_64/bin/objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/lib/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/shared/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/basic/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/background/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/widgets/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/flags/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/layers/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/raster/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/fun/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/10000/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/debug/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/performance/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/custom-tiles/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/moving-objects/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/mouse-actions/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/camera-actions/cmake_install.cmake")
  include("C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/samples/drag-and-drop/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/vedan/Desktop/Qt/Qt-QGeoView/build/Qt_6_9_3_mingw_64_64d973-Debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
