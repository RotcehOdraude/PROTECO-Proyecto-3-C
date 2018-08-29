/* Esta es una agenda simple en lenguaje C.
  Permite:
    Almacenar datos personales de un número de personas dado por
    el usuario.
*/
#include <stdio.h>
#include <stdlib.h>
//--------------------------------------------------
typedef struct{
  char nombre[20][1];
  int edad;
  char direccion[20][1];
  char telefono[20][1];
}Contacto;
void ingresar_contacto(Contacto *pointer);
//--------------------------------------------------
int main(int argc, char const *argv[]) {
  Contacto *agenda = NULL;
  agenda = (Contacto *) realloc(agenda,sizeof(Contacto));
  int opcion = 0;
  printf("Eliga una opcion:\n" );
  scanf("%d",&opcion);
  switch (opcion) {
    case 1:;
      //ingresar contactos
      ingresar_contacto(agenda);
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

void ingresar_contacto(Contacto *pointer) {
  //Contacto *pointerTmp = NULL;
  int i = 0, limiteWhile = 0,numeroDeContactos = 1;
  printf("Cuantos contactos va a ingresar: ");
  scanf("%i",&limiteWhile);
  if(pointer != NULL){
    do{
      printf("###### Escriba los siguientes datos del contacto: ######\n");
      printf("\tNombre: ");
      scanf("%s",&(pointer[i].nombre));
      printf("\tEdad: ");
      scanf("%i",&(pointer[i].edad));
      printf("\tDireccion: ");
      scanf("%s",&(pointer[i].direccion));
      printf("\tTelefono: ");
      scanf("%s",&(pointer[i].telefono));
      numeroDeContactos++;
      pointer = (Contacto *)realloc(pointer,numeroDeContactos*sizeof(Contacto));
      i++;
    }while(i < limiteWhile && pointer!= NULL);
  }
}
