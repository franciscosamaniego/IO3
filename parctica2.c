#include <stdio.h>

int main(void) {
  int n;
  char c;
  float f;
  float *ptr_f = &f;
  char s[100];
  scanf("%d-%c-%f-%s", &n, &c, ptr_f, s);
  printf("tu numero: %d\n", n);
  printf("tu char: %c\n", c);
  printf("tu float: %f\n", f);
  printf("tu string: %s\n", s);
  return 0;
}
