// Nombre      : Listas Enlazadas
// Descripcion : Implementacion y uso de Listas Enlazadas
// Alumno      : Pablo Ranieri,   Leg: 1565916
// Fecha       : 2017-11-20

#include "List.h"

int main(){
  List l;
  int v;
  std::cout << "Ingrese valores" << '\n';
  while (std::cin>>v) AgregarOrdenado(l,v);
  ImprimirLista(l);
}
