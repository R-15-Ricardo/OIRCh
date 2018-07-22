/*Programa para comparar la eficiencia del bubble sort contra 
el bubble sort mutante*/
#include <iostream>
//libreria estandar y de tiempo necesarias
#include <stdlib.h>
#include <time.h>
using namespace std;

//Funcion Bubble Sort Mutante. [VER BSMUTANTE.CPP PARA MAS INFO]
void mbsort (int *a,int n)
{
	int i,j,in,aux;
    for(i=1; i<n; i++)
    {
	in=0;        
    for (j=n-1; j>=i; j--)
         {
		 	if (a[j-1]>a[j])
         	{
		 		aux = a[j-1];
        		a[j-1]=a[j];
        		a[j]=aux;
        		in=1;
         	}
         }
		if (in==0)
		{
			break;
		}
	}
}
//Funcion Bubble sort. [VER RANDOM.CPP PARA MAS INFO]
void bsort (int *a,unsigned int n) 
{
	int aux;
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
}
//funcion main (principal)
int main ()
{
	/*Variables definidas:
	enteros: apuntador a (*a), apuntador (*b), numero de variables (v), minutos = 0 (m=0), horas = 0 (h=0)
	flotante: segundos (s)
	tiempo: ticks (t)
	*/
	int *a,*b,v,m=0,h=0;
	float s;
	clock_t t; 
	//Pide el numero de variables a ordenar y lo guarda en v
	cout<<"Inserte el numero de variables a ordenar: ";
	cin>>v;
	//guarda v variables en el apuntador a y b
	a=new int [v];
	b=new int [v];
	/*Genera un set de v numeros random lo guarda
	en el apuntador a y en el b*/
	srand((unsigned)time(NULL)); 
	for (int i=0;i<v;i++)
	{
		int n;
		n=rand()%100+1;
		a[i]=n;
		b[i]=n;
	}
	//Imprime el numero de variables guardadas
	cout<<"-"<<v<<" variables guardadas"<<endl;
	cout<<"Iniciando ordenamiento"<<endl;
	cout<<endl;
	cout<<"Resultados Bubble sort"<<endl;
	//empieza a calcular el tiempo (en ticks)
	t=clock();
	//llama la funcion bubble sort y ordena el conjunto en el apuntador a
	bsort (a,v);
	//termina de calcular el tiempo (en ticks)
	t=clock()-t;
	cout<<"Termine ordenamiento"<<endl;
	//convierte ticks a segundos
	s=(float)t/CLOCKS_PER_SEC;
	/*Calcula el tiempo que tardo en procesar la funcion bubble sort
	[VER TIEMPO.CPP PARA MAS INFO]*/
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
	cout<<"O lo mismo: "<<h<<" horas. "<<m<<" minutos. "<<s<<" segundos."<<endl;
	cout<<endl;
	//libera memoria en a
	delete []a;
	cout<<"Resultados Algoritmo mutante"<<endl;
	//empieza a calcular el tiempo (en ticks)
	t=clock();
	//llama la funcion bubble sort mutante y ordena el conjunto en el apuntador a
	mbsort (b,v);
	//termina de calcular el tiempo (en ticks)
	t=clock()-t;
	cout<<"Termine ordenamiento"<<endl;
	//convierte ticks a segundos
	s=(float)t/CLOCKS_PER_SEC;
	/*Calcula el tiempo que tardo en procesar la funcion bubble sort
	[VER TIEMPO.CPP PARA MAS INFO]*/
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
	cout<<"O lo mismo: "<<h<<" horas. "<<m<<" minutos. "<<s<<" segundos."<<endl;
	//libera memoria en b
	delete []b;
	cout<<"Programa finalizado";
}

