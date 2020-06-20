# CMake generated Testfile for 
# Source directory: C:/Users/CarmineDiGruttola/source/repos/poco/Data/SQLite/testsuite
# Build directory: C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Data/SQLite/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DataSQLite "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin/DataSQLite-testrunner.exe" "-ignore" "C:/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(DataSQLite PROPERTIES  ENVIRONMENT "POCO_BASE=C:/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Data/SQLite/testsuite" _BACKTRACE_TRIPLES "C:/Users/CarmineDiGruttola/source/repos/poco/Data/SQLite/testsuite/CMakeLists.txt;25;add_test;C:/Users/CarmineDiGruttola/source/repos/poco/Data/SQLite/testsuite/CMakeLists.txt;0;")
