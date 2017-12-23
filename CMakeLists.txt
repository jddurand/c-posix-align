CMAKE_MINIMUM_REQUIRED (VERSION 3.0.0 FATAL_ERROR)
IF (NOT MYPACKAGEBOOTSTRAP_DONE)
  INCLUDE ("3rdparty/github/cmake-utils/cmake/MyPackageBootstrap.cmake")
ENDIF ()
#
# Usually the version here correspong to the NEXT version - it is git tagged
# when we do make marpaESLIFPerlRelease
#
MYPACKAGESTART (posix_align 2 0 29)

###########
# Library #
###########
MYPACKAGELIBRARY(
  ${CMAKE_CURRENT_SOURCE_DIR}/include/internal/config.h.in
  ${INCLUDE_OUTPUT_PATH}/posix_align/internal/config.h
  src/errno.c)

###############
# Executables #
###############
# MYPACKAGETESTEXECUTABLE(marpaESLIFTester     test/marpaESLIFTester.c)

################
# Dependencies #
################
# MYPACKAGEDEPENDENCY (genericLogger "${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/github/genericLogger" LIBS)

#########
# Tests #
#########
# MYPACKAGECHECK(marpaESLIFTester)

###########
# Install #
###########
# MYPACKAGEMAN("doc/Tutorial/Calculator/README.pod" "MARPAESLIF_CALCULATOR" "3" "${MARPAESLIF_VERSION}")

#############
# Packaging #
#############
MYPACKAGEPACK ("" "Posix Alignment Library")

#########
# Setup #
#########
MYPACKAGEPRINTSETUP()
