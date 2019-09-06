#include <iostream>
#include "nodo.h"

int main(){ 
    nodo*raiz=0;
    nodo *nuevo=new nodo;
    nuevo->nombre="a";
    insertar(&raiz,nuevo->nombre);
    nodo *nuevo2=new nodo;
    nuevo2->nombre="b";
    insertar(&raiz,nuevo2->nombre);
   nodo *nuevo3=new nodo;
    nuevo3->nombre="c";
    insertar(&raiz,nuevo3->nombre);
    imprimir(&raiz);
    return 0;
}
