//Programa que calcula el tiempo en el cual un Bubble sort se ejecuta

#include <iostream>
//biblioteca estandar y de tiempo necesarias
#include <stdlib.h>
#include <time.h>
using namespace std;

/*funcion bubble sort que toma la variable
y el numero de variables*/
void bsort (int *a,unsigned int n) 
{
	int aux;
	for (int i=0;i<n-1;i++)
	{
		//for que se repite el numero de variables menos 1
		for (int j=0;j<n-1-i;j++)
		{
			//compara las dos varaibles que esten juntas y recorre hacia arriba la mas grande
			if (a[j]>a[j+1])
			{
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
}
//funcion Int (principal)
int main  ()
{
	//for que repite infinitamente el programa
	for (int i=0;i+1>i;i++)
	{
	/*Variables definidas:
	enteras: Apuntador a (*a), numero de variables (v), minutos = 0 (m=0), horas = 0 (h=0)
	flotantes: segundos (s)
	tiempo: ticks (t)
	*/
	int *a,v,m=0,h=0;
	float s;
	clock_t t;
	//pide el numero de variables a ordenar e inserta en v
	cout<<"Inserte el numero de variables a ordenar: ";
	cin>>v;
	//Guarda v numero de variables
	a=new int [v];
	//genera v numeros random y los guarda en los espacios de memoria a
	srand((unsigned)time(NULL)); 
	for (int i=0;i<v;i++)
	{
		int n;
		n=rand()%100+1;
		a[i]=n;
	}
	//Da el numero de variables guardadas y comienza a ordenar
	cout<<"-"<<v<<" variables guardadas"<<endl;
	cout<<"Iniciando ordenamiento"<<endl;
	//comienza a medir el tiempo (en ticks)
	t=clock();
	//ejecuta funcion bubble sort
	bsort (a,v);
	//termina de medir el tiempo (en ticks)
	t=clock()-t;
	cout<<"Termine ordenamiento"<<endl;
	//convierte ticks a segundos
	s=(float)t/CLOCKS_PER_SEC;
	//calcula en base a los segundos, las horas y minutos
	cout<<"Tarde: "<<s<<" segundos."<<endl;
	if(s>60)
	{
		m=s/60;
		s=s-m*60;
	}
	if(m>60)
	{
		h=m/60;
		m=m-h*60;
	}
	//muesta el tiempo que tardo en ejecutarse el bubble sort
	cout<<"O lo mismo: "<<h<<" horas. "<<m<<" minutos. "<<s<<" segundos."<<endl;
	}
}

