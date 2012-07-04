This repository is a minimal example of a problem I'm trying to understand involving c++ templates and static member initialization.

To see the problem, just look at `minimal.cc` and then compile using `sh make_minimal.sh`.  Compiling as-is leads to something along the lines of

```
Undefined symbols for architecture x86_64:
  "AStruct::M", referenced from:
      _main in ccP0Zz3K.o
ld: symbol(s) not found for architecture x86_64
collect2: ld returned 1 exit status
make_minimal.sh: line 3: ./minimal: No such file or directory
```

The other `make_` files are for various versions of the same thing, various ideas I tried.  There are four versions that can be built using `shlib.cc`, e.g., `sh make_shared.cc -DOPT_1` builds via a shared library using option 1.