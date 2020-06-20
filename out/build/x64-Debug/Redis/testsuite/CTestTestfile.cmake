# CMake generated Testfile for 
# Source directory: C:/Users/CarmineDiGruttola/source/repos/poco/Redis/testsuite
# Build directory: C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Redis/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Redis "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin/Redis-testrunner.exe" "-ignore" "C:/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(Redis PROPERTIES  ENVIRONMENT "POCO_BASE=C:/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Redis/testsuite" _BACKTRACE_TRIPLES "C:/Users/CarmineDiGruttola/source/repos/poco/Redis/testsuite/CMakeLists.txt;25;add_test;C:/Users/CarmineDiGruttola/source/repos/poco/Redis/testsuite/CMakeLists.txt;0;")
