#include <iostream>
using namespace std; 
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0
struct nodo {
   char dato[40];     
   struct nodo *sig; 
};
void crear(nodo *principio) 
{
cout<< "Entre el dato o Escriba FIN para terminar: ";
cin>> principio->dato;
if (strcmp(principio->dato, "FIN") == 0)
    principio->sig=NULL;
else {
    //reserva espacio para el siguiente nodo
   principio->sig= new nodo;
   //   principio->sig=(nodo *) malloc (sizeof(nodo));
    crear(principio->sig);
    }
return;
}
void imprimir(nodo *principio) //Imprime la lista enlazada
{
   if(principio->sig != NULL){
      cout<<principio->dato<<endl;
      imprimir(principio->sig);
   }
   return;
}










int main()
{
nodo *principio;   // puntero al principio de la lista
principio= new nodo;
//principio=(nodo *) malloc(sizeof(nodo));
system("cls");
crear (principio);
imprimir(principio);
getch();
return 0;
}
	

