#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[10];
  for(int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  exit(0);
}
