/*Crear una lista que almacene "n" numeros enteros y mostrarlos*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Elemento {
	int numero;
	struct Elemento *siguiente;
};

struct Elemento *pi, *pa, *pf;

void insertar_lista(int valor) {
	if (pi == NULL) {
		pi = new (Elemento);
		pi->numero = valor;
		pf = pi;
	} else {
		pa = new(Elemento);
		pf->siguiente = pa;
		pa->numero = valor;
		pf=pa;
	}
	pf->siguiente = NULL;
}

void mostrar_elementos() {
	pa = pi;
	int i = 1;
	cout << endl << endl <<"Elementos de la lista enlazada "<< endl <<endl;
	while(pa !=NULL){
		cout << "Elemento numero" << i << ":" <<pa->numero << endl;
		pa = pa->siguiente;
	}
}
int main () {
	int valor;
	char respuesta;
	do {
		cout << endl << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" ;
		cout << endl << "Ingrese un valor: ";
		cin >> valor;
		insertar_lista(valor);
		cout << endl <<"Desea seguir ingresando elementos (S/N): ";
		respuesta = getch();
		} while (respuesta == 'S');
		mostrar_elementos();
		return 0;
		}
