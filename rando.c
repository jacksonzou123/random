#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int * generateRandom(int *list, int size) {
  int f = open("/dev/random", O_RDONLY);
  // if (f == -1) {
  printf("Error: %s\n", strerror(errno));
  // }
  // else {
  //   read(f, list, 10);
  //   return list;
  // }
  return list;
}
