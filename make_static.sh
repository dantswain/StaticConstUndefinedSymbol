g++ $* -c shlib.cc
ar rcs libshlib.a shlib.o

g++ $* test.cc libshlib.a -o test_static

./test_static
