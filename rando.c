#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "rando.h"

int generateRandom() {
  int f = open("/dev/random", O_RDONLY);
  // if (f == -1) {
  printf("File: %d", f);
  // }
  // else {
  //   read(f, list, 10);
  //   return list;
  // }
  return 0;
}
