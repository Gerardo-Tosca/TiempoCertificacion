//Codigo para calcular tiempo de certificacion.
//Gerardo Tosca
//19 de agosto 2022
// v1

//Bibliotecas
#include <stdio.h>

int main(void) {
  //Variables
  int Tcertificado = 60;
  int Tdedicado;
  float Trequerido;
  //ingresar dos valores
  printf("Ingresa el tiempo a estudiar a minutos\n");
  scanf("%d", &Tdedicado);
  //Operacion 
  Trequerido = Tcertificado*60/Tdedicado;
  //Imprimir resultados
  printf("Se requieren %f ")
  return 0;
}