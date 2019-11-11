#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "rando.h"
#include <string.h>

int main() {
  int *list = malloc(10 * sizeof(int));
  int i;
  for (i = 0; i < 10; i++) {
    *(list+i) = generateRandom();
  }
  for (i = 0; i < 10; i++) {
    printf("printing num %d: %d\n", i, *(list+i));
  }

  int f = open("random.txt", O_CREAT | O_TRUNC | O_WRONLY, 0777);
  if (f == -1) {
    printf("Error for opening: %s", strerror(errno));
  }
  else {
    write(f, list, sizeof(int) * 10);
  }
  return 0;
}
