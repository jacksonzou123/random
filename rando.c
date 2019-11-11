#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "rando.h"
#include <string.h>

int generateRandom() {
  int f = open("/dev/random", O_RDONLY);
  if (f == -1) {
    printf("Error: %s", strerror(errno));
  }
  else {
    int *final;
    read(f, final, 1);
    return final;
  }
  return 0;
}
