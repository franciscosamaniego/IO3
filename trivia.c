#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen("trivia.txt", "r");
  int n;
  int q[30];
  int c;
  int l = 0;
  while(1) {
    printf("Queres jugar mi trivia?\n");
    printf("1)Si\n");
    printf("2)No\n");
    scanf("%d", &n);
    switch (n) {
      case 1:
      printf("Ok\n");
      while(1) {
        for (int i = 0; i < 5; i++) {
          while((c = fgetc(fp)) != '\n')
          printf("%c", c);
          printf("\n");
        }
        scanf("%d", &q[l]);
        switch (q[l]) {
          case 1:
          printf("Hola\n");
          continue;
          case 2:
          printf("Hey\n");
          exit(0);
        }
        l++;
      }
        continue;
        case 2:
      }
      printf("Bueno, chau\n");
      exit(0);
  }
  return 0;
}
