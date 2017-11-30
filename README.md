# Workshop C++ for C programmers (NUCC-FCUP, November 9th, 2017)

### Useful Resources

* [C++ Classes](https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm)
* [Inline Functions](http://www.geeksforgeeks.org/inline-functions-cpp/)
* [Power up C++ with the Standard Template Library](https://www.topcoder.com/community/data-science/data-science-tutorials/power-up-c-with-the-standard-template-library-part-1/)
* [Introsort](https://en.wikipedia.org/wiki/Introsort)

## Organization and Files

The order we suggest is: 6 -> 12 -> 4 -> 8 -> 9 -> 14 ->

1. [bitsAndChill.cpp](code/bitsAndChill.cpp):
1. [boxClass.cpp](code/boxClass.cpp):
1. [dynamicMem.cpp](code/dynamicMem.cpp):
1. [floatPrinting.cpp](code/floatPrinting.cpp): Working with **floats** and **pretty printing** with `streams`.
1. [flyerCode.cpp](code/flyerCode.cpp):
1. [helloWorld.cpp](code/helloWorld.cpp): A simple "Hello World" printing code.
1. [inline.cpp](code/inline.cpp):
1. [setStrings.cpp](code/setStrings.cpp): An example about working with **strings** and **sets**. Given an input (word) string, insert the characters in a set, an print every element in the set (since we iterate through the set and the set is **ordered**, characters will be printed in alphabetical order). Since the elements of a `set` are **unique**, duplicates will only be printed once.
1. [setStrings11.cpp](code/setStrings11.cpp): An example with **strings** and **sets** in C++11, making use of `auto` iterators. Similar to the previous example, with the exception that instead of reading a word, this example reads a **line**.
1. [sorting.cpp](code/sorting.cpp):
1. [string.cpp](code/string.cpp):
1. [sumLongLong.cpp](code/sumLongLong.cpp): An example reading two `long long ints` and summing them, printing the result.
1. [templateFunc.cpp](code/templateFunc.cpp):
1. [uva100.cpp](code/uva100.cpp): Solving problem **100** in [UVa Online Judge](https://uva.onlinejudge.org/external/1/100.pdf).
1. [vector.cpp](code/vector.cpp):

## Compiling

### Linux

To compile each file, just run:

> g++ -Wall *name_of_file*.cpp

To compile in C++11, use instead:

> g++ -Wall -std=c++11 *name_of_file*.cpp

### MacOS

To compile each file, just run:

> clang++ -Wall *name_of_file*.cpp

To compile in C++11, use instead:

> clang++ -Wall -std=c++11 -stdlib=libc++ *name_of_file*.cpp

## Executing

To execute, simply run:

> ./a.out

&copy; Bruno Casteleiro ([@yat0](http://github.com/yat0/)) and João Rebelo Pires ([@jrbartowski](http://github.com/jrbartowski/)), 2017
