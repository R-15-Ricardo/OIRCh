/*Programa que genera 100 numeros random, busca el máximo,
el minimo, los ordena y muetra el conjunto ordenado*/
#include <iostream>
//libreria estandar y de tiempo necesarias
#include <stdlib.h>
#include <time.h>
using namespace std;

//funcion para imprimir un conjunto. Toma apuntador y # de variables a ordenar
void imprime (int *a,int n)
{
	//for que imprime v numero de variables 
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<endl;
}
//funcion que calcula el máximo. Toma apuntador y # de variables a ordenar
int maximo (int *a,int n)
{
	//define entero maximo
	int max;
	/*Compara las varaibles que esten juntas y mete la
	mas grande en max. Esto se repite hasta que todas las
	variables hayan sido comparadas*/
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	//regresa la variable max
	return max;
}
//funcion que calcula el minimo. Toma apuntador y # de variables a ordenar
int minimo (int *a,int n)
{
	//define entero minimo
	int min;
	/*Compara las varaibles que esten juntas y mete la
	mas grande en max. Esto se repite hasta que todas las
	variables hayan sido comparadas*/
	min=a[0];
	for(int i=0;i<n;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	//regresa la variable min
	return min;
}
//funcion bubble sort
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
//funcion main (principal)
int main ()
{
	/*Variables definidas:
	enteras: Apuntador a (*a), maixmo (max), minimo (min), numero de variables (v)
	Define V como 100
	*/
	int *a,max,min,v;
	v=100;
	//Guarda V numero de variables
	a=new int [v];
	//genera 100 numeros random
	srand((unsigned)time(NULL)); 
	for (int i=0;i<v;i++)
	{
		int n;
		n=rand()%100+1;
		a[i]=n;
	}
	//imprime el conjunto de numeros aleatorios
	cout<<"Los numeros aleatorios son: "<<endl;
	//llama funcion para imprime
	imprime (a,v);
	cout<<endl;
	//imprime el maximo numero en el conjunto
	cout<<"El numero maximo es: ";
	//llama a funcion maximo
	max=maximo (a,v);
	cout<<max;
	cout<<endl;
	//imprime el maximo numero en el conjunto
	cout<<"El minimo es: ";
	//llama la funcion minimo 
	min=minimo (a,v);
	cout<<min;
	cout<<endl;
	//imprime el conjunto ordenado
	cout<<"El conjunto ordenado es: "<<endl;
	//llama la funcion bubble sort
	bsort (a,v);
	//llama la funcion imprime
	imprime (a,v);
	cout<<"termine";
	//libera el espacio de memoria del apuntador a
	delete []a;
}

