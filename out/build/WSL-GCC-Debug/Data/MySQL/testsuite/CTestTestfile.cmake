# CMake generated Testfile for 
# Source directory: /mnt/c/Users/CarmineDiGruttola/source/repos/poco/Data/MySQL/testsuite
# Build directory: /mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/Data/MySQL/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DataMySQL "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/bin/DataMySQL-testrunner" "-ignore" "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(DataMySQL PROPERTIES  ENVIRONMENT "POCO_BASE=/mnt/c/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/out/build/WSL-GCC-Debug/Data/MySQL/testsuite" _BACKTRACE_TRIPLES "/mnt/c/Users/CarmineDiGruttola/source/repos/poco/Data/MySQL/testsuite/CMakeLists.txt;21;add_test;/mnt/c/Users/CarmineDiGruttola/source/repos/poco/Data/MySQL/testsuite/CMakeLists.txt;0;")
