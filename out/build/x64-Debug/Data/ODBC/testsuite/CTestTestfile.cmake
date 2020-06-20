# CMake generated Testfile for 
# Source directory: C:/Users/CarmineDiGruttola/source/repos/poco/Data/ODBC/testsuite
# Build directory: C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Data/ODBC/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DataODBC "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin/DataODBC-testrunner.exe" "-ignore" "C:/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(DataODBC PROPERTIES  ENVIRONMENT "POCO_BASE=C:/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Data/ODBC/testsuite" _BACKTRACE_TRIPLES "C:/Users/CarmineDiGruttola/source/repos/poco/Data/ODBC/testsuite/CMakeLists.txt;21;add_test;C:/Users/CarmineDiGruttola/source/repos/poco/Data/ODBC/testsuite/CMakeLists.txt;0;")
