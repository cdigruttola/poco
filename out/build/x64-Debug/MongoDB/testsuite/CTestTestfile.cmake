# CMake generated Testfile for 
# Source directory: C:/Users/CarmineDiGruttola/source/repos/poco/MongoDB/testsuite
# Build directory: C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/MongoDB/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MongoDB "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin/MongoDB-testrunner.exe" "-ignore" "C:/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(MongoDB PROPERTIES  ENVIRONMENT "POCO_BASE=C:/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/MongoDB/testsuite" _BACKTRACE_TRIPLES "C:/Users/CarmineDiGruttola/source/repos/poco/MongoDB/testsuite/CMakeLists.txt;25;add_test;C:/Users/CarmineDiGruttola/source/repos/poco/MongoDB/testsuite/CMakeLists.txt;0;")
