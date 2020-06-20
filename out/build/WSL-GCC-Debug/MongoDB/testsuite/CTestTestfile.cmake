# CMake generated Testfile for 
# Source directory: /mnt/c/Users/CarmineDiGruttola/source/repos/poco/MongoDB/testsuite
# Build directory: /mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/MongoDB/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MongoDB "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/bin/MongoDB-testrunner" "-ignore" "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(MongoDB PROPERTIES  ENVIRONMENT "POCO_BASE=/mnt/c/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/MongoDB/testsuite" _BACKTRACE_TRIPLES "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/MongoDB/testsuite/CMakeLists.txt;25;add_test;/mnt/c/Users/CarmineDiGruttola/source/repos/poco/MongoDB/testsuite/CMakeLists.txt;0;")
