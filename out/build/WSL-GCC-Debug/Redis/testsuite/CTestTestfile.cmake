# CMake generated Testfile for 
# Source directory: /mnt/c/Users/CarmineDiGruttola/source/repos/poco/Redis/testsuite
# Build directory: /mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/Redis/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Redis "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/bin/Redis-testrunner" "-ignore" "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(Redis PROPERTIES  ENVIRONMENT "POCO_BASE=/mnt/c/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/Redis/testsuite" _BACKTRACE_TRIPLES "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/Redis/testsuite/CMakeLists.txt;25;add_test;/mnt/c/Users/CarmineDiGruttola/source/repos/poco/Redis/testsuite/CMakeLists.txt;0;")
