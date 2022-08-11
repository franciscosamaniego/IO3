#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int numero;
    for(int i = 0; i < n; i++) {
        scanf("%d", &numero);
        printf("%d ", numero);
    }
    printf("\n");
    return 0;
} 