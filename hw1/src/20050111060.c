#include <hellomake.h>
#include <randomMatrixMultiplication.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  // call a function in another file
  myPrintHelloMake();

  randomMatrixMultiplication(atoi(argv[1]), atoi(argv[2]), argv[3]);

  return 0;
}
