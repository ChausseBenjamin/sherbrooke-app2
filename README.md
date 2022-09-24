# APP2 Programation et algorithmes

This repo contains work created for the USherbrooke APP2 which introduces
programing as well as basic algorithms. The project requires that we (the
students) create a C library which doesn't rely on third party libraries to do
the following things:

| Task                                  | filename           | Level    |
| :------------------------------------ | :----------------- | :------- |
| Spot characters in a string           | `findChar.h`       | Easy     |
| Identify words which are palindromes  | `findPalindrome.h` | Easy     |
| Calculate sines (using series)        | `sine.h`           | Medium   |
| Calculate cosines (using series)      | `cosine.h`         | Medium   |
| Matrix addition                       | `TODO`             | Hard*    |
| Matrix multiplication                 | `TODO`             | Hard*    |

*This is the first programing APP. The word Hard is used very liberaly here.

# Structure

Files which do a specific operation required by the APP are located in their
one files using their aforementioned filenames. Any function used by more than
one of those functions are located in the `format.h` header files. Also, the
`testsuite.c` provides an easy way to test the library with multiple edge cases
using data contained in the `testData.h` header file.
