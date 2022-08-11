#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    char *palabras[1000];
    int lineas = 0;
    int i = 0;
    while (scanf("%s", &palabras) != '\0') {
      if(palabras[i] == "\n")     lineas++;
    }
    printf("Lineas: %d\n", lineas);
    return 0;
}
