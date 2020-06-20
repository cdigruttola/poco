# CMake generated Testfile for 
# Source directory: C:/Users/CarmineDiGruttola/source/repos/poco/Data/PostgreSQL/testsuite
# Build directory: C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Data/PostgreSQL/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DataPostgreSQL "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin/DataPostgreSQL-testrunner.exe" "-ignore" "C:/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(DataPostgreSQL PROPERTIES  ENVIRONMENT "POCO_BASE=C:/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/Data/PostgreSQL/testsuite" _BACKTRACE_TRIPLES "C:/Users/CarmineDiGruttola/source/repos/poco/Data/PostgreSQL/testsuite/CMakeLists.txt;14;add_test;C:/Users/CarmineDiGruttola/source/repos/poco/Data/PostgreSQL/testsuite/CMakeLists.txt;0;")
