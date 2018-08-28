/* Esta es una agenda simple en lenguaje C.
  Permite:
    Almacenar datos personales de un número de personas dado por
    el usuario.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int opcion = 0;
  printf("Eliga una opcion:\n" );
  scanf("%d",&opcion);
  switch (opcion) {
    case 1:
      //ingresar contactos
      break;
    case 2:
      // consultar contacto
      break;
    case 3:
      // modificar contacto
      break;
    case 4:
      // mostrar todos los contactos
      break;
    case 5:
      // salir
      return 0;
    default:
      printf("Opcion invalida\n");

  }
}
