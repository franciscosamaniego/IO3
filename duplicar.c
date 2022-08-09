#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t;
  while(scanf("%d", &t) != EOF) {
    printf("%d ", t * 2);
  }
  printf("\n");
  return 0;
}
