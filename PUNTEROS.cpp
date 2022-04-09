#include<iostream>
#include<conio.h>

using namespace std;

struct Etapa
{
	double horas,min,seg;
}	
	etapa[3], *puntero_etapa = etapa;

void pedirDatos();
void calcularTiempo(Etapa *);

int main()
{
	pedirDatos();
	calcularTiempo(puntero_etapa);
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout.precision(2);
	cout<<"						PUNTEROS"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;
	cout<<" Se define una estructura para indicar el tiempo que se emplea en resolver un simulacro de examen."<<endl; 
	cout<<" La estructura tendra 3 campos : Horas, Minutos, Segundos. Los cuales seran de 1 ejercicio."<<endl;
	cout<<" El programa calculara la suma de los tiempos de 3 ejercicios por medio de punteros."<<endl<<endl;
	cout<<" Digite los tiempos empleados de los 3 ejercicios: \n\n";	
	
	for(int i=0;i<3;i++)
	{
		cout<<"	Horas: "; cin>>(puntero_etapa+i)->horas;
		cout<<"	Minutos: "; cin>>(puntero_etapa+i)->min;
		cout<<"	Segundos: "; cin>>(puntero_etapa+i)->seg;
		cout<<"\n";
	}
}

void calcularTiempo(Etapa *puntero_etapa)
{
	double horasT=0,minutosT=0,segundosT=0;
	
	for(int i=0;i<3;i++){
		horasT += (puntero_etapa+i)->horas; 
		minutosT += (puntero_etapa+i)->min;
		if(minutosT >= 60)
		{
			minutosT -= 60;
			horasT++;
		}
		segundosT += (puntero_etapa+i)->seg;
		if(segundosT >= 60)
		{
			segundosT -= 60;
			minutosT++; 
		}
	}
	

	cout<<"\n	El tiempo total del examen simulacro es: "<<endl;
	cout<<"	Horas: "<<horasT<<endl;
	cout<<"	Minutos: "<<minutosT<<endl;
	cout<<"	Segundos: "<<segundosT<<endl;
}
