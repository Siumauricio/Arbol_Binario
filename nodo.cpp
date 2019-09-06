#include "nodo.h"
#include <string.h>
#include <iostream>
using namespace std;

void insertar(nodo** raiz, char* cadena) {
	nodo* nuevo=new nodo;
    nuevo->nombre=cadena;
	if (*raiz == nullptr)
	{
		(*raiz) = nuevo;
		return;
	}
	else {
	nodo* actual= *raiz;
	while (actual!=nullptr)
	{
	int x=strcmp(actual->nombre,cadena);
		if (x>0)
		{
			if(actual=*raiz){
				nuevo->siguiente=actual;
				actual->anterior=nuevo;
				*raiz=nuevo;
				return;
			}
			actual->anterior->siguiente=nuevo;
			nuevo->anterior=actual->anterior;
			actual->anterior=nuevo;
			nuevo->siguiente=actual;
			return;
		}
		else if(actual->siguiente==0){
			actual->siguiente=nuevo;
			nuevo->anterior=actual;
		 
		}
		actual=actual->siguiente;

	}
	
	}
}
void imprimir(nodo** raiz)
{
	if (*raiz == 0)
	{
		return;
	}
	std::cout << " [ " << (*raiz)->nombre << " ] "<<std::endl;
	imprimir(&(*raiz)->siguiente);
}
bool buscar(nodo** raiz,char*nombre) {
	nodo* actual = *raiz;
	if (*raiz == 0)
	{
		return false;
	}
	if ((*raiz)->nombre==nombre)
	{
		return true;
	}
	buscar(&(*raiz)->siguiente,nombre);
	return false;
}

 void eliminar(nodo**raiz,char*cadena){
    nodo*nuevo=*raiz;
    if (buscar(&nuevo,cadena)){
     delete nuevo;
    }else{
     cout<<"No Se Encontro la cadena";
   }
}
