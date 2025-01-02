#include <stdio.h>
#include <stdlib.h>

//void swap(int, int); //defined in Listing 2-2

//void swap(int a, int b) {
//  int t = a;
//  a = b;
//  b = t;
//  printf("swap: a = %d, b = %d\n", a, b);
//}

void swap(int *pa, int *pb) { // pa → a: 21  pb → b: 17
  int t = *pa;                // t: 21
  *pa = *pb;                  // pa → a: 17  pb → b: 17
  *pb = t;                    // pa → a: 17  pb → b: 21
}

int main() {
  int a = 21;                              // a: 21
  int b = 17;                              // b: 17
  swap(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);  // a: 17 b: 21
  return EXIT_SUCCESS;
}