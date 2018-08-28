/* Esta es una agenda simple en lenguaje C.
  Permite:
    Almacenar datos personales de un número de personas dado por
    el usuario.
*/
#include <stdio.h>
//--------------------------------------------------
//void ingresar_contacto();

typedef struct{
  char nombre[20][1];
  int edad;
  char direccion;
  char telefono;
}Contacto;


//--------------------------------------------------
int main(int argc, char const *argv[]) {

  int opcion = 0;
  printf("Eliga una opcion:\n" );
  scanf("%d",&opcion);
  switch (opcion) {
    case 1:;
      //ingresar contactos
      Contacto Hector;
      scanf("%s",Hector.nombre);
      printf("%s\n",Hector.nombre );
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

void ingresar_contacto() {
  int numeroDeContactos = 0;
  printf("Cuantos contactos va a ingresar: ");
  scanf("%i",&numeroDeContactos);

  for (size_t i = 0; i < numeroDeContactos; i++) {

  }
}
