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
    int final[1];
    read(f, final, sizeof(int));
    close(f);
    return final[0];
  }
  close(f);
  return 0;
}
