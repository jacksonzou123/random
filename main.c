#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "rando.h"

int main() {
  int * list = malloc(10 * sizeof(int));
  list = generateRandom(list, 10);
  int i;
  for (i = 0; i < 10; i++) {
    printf("printing num %d: %d\n", i, *(list+i));
  }
  return 0;
}
