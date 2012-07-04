g++ $* -dynamiclib -fPIC -fno-common shlib.cc -o shlib.dylib

g++ $* test.cc shlib.dylib -o test_shared

./test_shared
