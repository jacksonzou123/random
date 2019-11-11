#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "rando.h"

int main() {
  int *list = malloc(10 * sizeof(int));
  int i;
  for (i = 0; i < 10; i++) {
    *(list+i) = generateRandom();
  }
  for (i = 0; i < 10; i++) {
    printf("printing num %d: %d", i, *(list+i));
  }
  return 0;
}
