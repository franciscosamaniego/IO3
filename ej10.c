#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int line = 0;
  while((c = fgetc(fp)) != EOF) {
    if(c == '\n')   line++;
  }
  printf("Lineas: %d\n", line);
    return 0;
}

