#include "nodo.h"
#include <string.h>
#include <iostream>
using namespace std;

void insertar(nodo**raiz,char* cadena){
    nodo* nuevo;
    if (*raiz==0)
    {
      (*raiz)=nuevo;
    } else {
        
       (*raiz)->siguiente->nombre=nuevo->siguiente->nombre;
    }
}
void imprimir(nodo**raiz){
    nodo*actual=*raiz;
      if (*raiz==0)
    {
        return;
    }
    cout<<"["<<actual->nombre<<"]";
    actual=actual->siguiente;
}   
