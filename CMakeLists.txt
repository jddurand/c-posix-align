CMAKE_MINIMUM_REQUIRED (VERSION 3.0 FATAL_ERROR)
#
# For scope reasons some CMake policies must be writen at this level
#
IF (POLICY CMP0048)
  CMAKE_POLICY (SET CMP0048 NEW)
ENDIF ()

INCLUDE (cmake/CMakeSetup.cmake)
INCLUDE (cmake/CheckErrno.cmake)
