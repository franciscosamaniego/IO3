#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  // char buffer[1000];
  //stdin: archivo existente de la maquina
  //fprint : printf generalizado, podes decir a que archivo imprimir
  // while(fgets(buffer, 1000, stdin) != NULL);
  //   printf("%s\n", buffer);
  //stdin: teclado  stdout y stderr: salida de pantalla
  // para direccionar stderr poner 2> a.txt
  // FILE * fp;
  // fp = fopen("a.txt", "w");
  // //w: borrar todo lo que habia en el archivo y escribis
  // //a: escribis sin borrar lo anterior que habia
  // //r: leer el archivo
  // fprintf(fp, "Escribi lo que queres\n");
  // fclose(fp);
  int opcion = 0;
  char c;
  while(1) {
    system("clear");
    printf("1)Opcion 1\n");
    printf("2)Opcion 2\n");
    printf("3)Salir\n");
    scanf("%d", &opcion);
    getchar(); //esto saca el \n
    switch (opcion) {
      case 1:
        system("clear");
        printf("Elegiste opcion 1\n");
        printf("Presione enter para continuar\n");
        scanf("%c", &c);
        break;
      case 2:
        system("clear");
        printf("Elegiste opcion 2\n");
        printf("Presione enter para continuar\n");
        scanf("%c", &c);
        break;
      case 3:
        exit(0);
        break;
      default:
        printf("Error\n");
        exit(1);
      }
    }
  return 0;
}
