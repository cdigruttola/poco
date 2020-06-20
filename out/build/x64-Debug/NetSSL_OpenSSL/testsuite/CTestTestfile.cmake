# CMake generated Testfile for 
# Source directory: C:/Users/CarmineDiGruttola/source/repos/poco/NetSSL_OpenSSL/testsuite
# Build directory: C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/NetSSL_OpenSSL/testsuite
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(NetSSL "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin/NetSSL-testrunner.exe" "-ignore" "C:/Users/CarmineDiGruttola/source/repos/poco/cppignore.lnx" "-all")
set_tests_properties(NetSSL PROPERTIES  ENVIRONMENT "POCO_BASE=C:/Users/CarmineDiGruttola/source/repos/poco" WORKING_DIRECTORY "C:/Users/CarmineDiGruttola/source/repos/poco/out/build/x64-Debug/bin" _BACKTRACE_TRIPLES "C:/Users/CarmineDiGruttola/source/repos/poco/NetSSL_OpenSSL/testsuite/CMakeLists.txt;25;add_test;C:/Users/CarmineDiGruttola/source/repos/poco/NetSSL_OpenSSL/testsuite/CMakeLists.txt;0;")
