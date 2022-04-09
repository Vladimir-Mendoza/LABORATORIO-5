#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	char dato;
	Nodo *siguiente;	
};

void menu();
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char &);

int main()
{	
	menu();
	
	getch();
	return 0;
}

void menu()
{
	Nodo *pila = NULL;
	int opcion;
	char dato;
	
	do
	{
		cout<<"						PILAS"<<endl;
		cout<<"													ETN - 307L"<<endl<<endl;
		cout<<" El programa insertara y mostrara caracteres de una pila usando sus conceptos."<<endl<<endl;
		cout<<"\t					MENU\n\n";
		cout<<"	1. Insertar un caracter a la pila"<<endl;
		cout<<"	2. Mostrar todos los elementos de la pila"<<endl;
		cout<<"	3. Salir"<<endl<<endl;
		cout<<"	Opcion: ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1: cout<<"\n	Digite un caracter: ";
					cin>>dato;
					agregarPila(pila,dato);
					break;
			case 2: cout<<"\n	Mostrando todos los elementos de la pila: ";
					while(pila != NULL)
					{
						sacarPila(pila,dato);
						if(pila != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		}
		system("cls");
	}
	while(opcion != 3);
	
}

void agregarPila(Nodo *&pila,char n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila,char &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
