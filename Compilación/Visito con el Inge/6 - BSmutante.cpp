//Programa que ordena un conjunto de variables con un bubble sort mejorado
#include <iostream>
//libreria estandar y de tiempo necesarias
#include <stdlib.h>
#include <time.h>
using namespace std;

//funcion bubble sort mutante que pide aputador de a y numero de varibles
void mbsort (int *a,int n)
{
	int i,j,in,aux;
	/*compara las variables de manera similar a bubble sort
	 [MAS INFORMACION DE ESTA COMPARACION EN BSM.JPG]*/
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
        /*si la variable in (bandera de inicio) es
		igual a 0, entonces sale del for*/
		if (in==0)
		{
			break;
		}
	}
}
//funcion main (principal)
int main ()
{
	/*Variables definidas:
	enteros: apuntador a (*a), numero de variables a ordenar (v)
	flotante: segundos (s)
	tiempo: ticks (t)*/
	int *a,v;
	float s;
	clock_t t;
	//pide el numero de variables a enterar y lo inserta en v
	cout<<"Insterte variables a ordenar: ";
	cin>>v;
	//guarda v variables
	a=new int [v];
	//genera v numeros random y los guarda en a
	srand ((unsigned)time(NULL));
	for (int i=0;i<v;i++)
	{
		int n;
		n=rand()%100+1;
		a[i]=n;
	}
	//imprime el numero de variables guardadas
	cout<<v<<" variables guardadas."<<endl;
	cout<<"Comenzando ordenamiento"<<endl;
	//empieza a calcular el tiempo (en ticks)
	t=clock();
	//llama funcion bubble sort mutante
	mbsort (a,v);
	//termina de calcuar el tiempo (en ticks)
	t=clock()-t;
	//convierte los ticks en segundo
	s=(float)t/CLOCKS_PER_SEC;
	cout<<"Termine."<<endl;
	//imprime el tiempo que tardo en procesar el bubble sort mutante en segundos
	cout<<"Tarde "<<s<<" segundos."<<endl;
	return 0; 
}
