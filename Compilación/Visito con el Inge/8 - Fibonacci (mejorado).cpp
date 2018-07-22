/*Programa que calcula el fibonacci de una numero 
n y el tiempo que tarda en procesarlo (algoritmo mejorado)*/
#include <iostream>
//Libreria estandar y de tiempo necesarias
#include <stdlib.h>
#include <time.h>
//librria de windows para la funcion getch()
#include <conio.h>
using namespace std;

//funcion para calcular el fibonacci
int nfib (int n,int *m)
{
	//guarda los fibonaccis calculados hasta el momento
	if (m[n]!=0)
	{
		return m[n];
	}
	//calcula los fibonaccis de 1 ó 2
	if (n==1||n==2)
	{
		m[n]=1;
		return m[n];
	}
	//calcula el fibonacci del numero f y sus fibonaccis intermedios
	m[n]=nfib(n-1,m)+nfib(n-2,m);
	//regresa f
	return m[n];
}
//funcion int (principal)
int main ()
{
	/*Variables definidas:
	enteros: apuntador a (a*),fibonacci a calcular (f), fibonacci calculado (nf), minutos = 0 (m=0), horas = 0 (h=0)
	tiempo: ticks (t)
	flotantes: segundos (s)*/
	int *a,f,nf,m=0,h=0; 
	clock_t t;
	float s;
	//pide el fibonacci a calcular y lo introduce a f
	cout<<"Calcular el fibonacci de: ";
	cin>>f;
	//guarda f+1 variables
	a=new int [f+1];
	//llena con 0 todas las variables
	for (int i=0;i<f;i++)
	{
		a[i]=0;
	}
	//comienza a calcular el tiempo (en ticks)
	t=clock();
	//llama la funcion fibonacci
	nf=nfib (f,a);
	//termina de calcular el tiempo (en ticks)
	t=clock()-t;
	//imprime el fibonacci de f
	cout<<"El fibonacci de "<<f<<" es: "<<nf<<endl;
	//convierte los ticks a segundos
	s=(float)t/CLOCKS_PER_SEC;
	/*calcula el tiempo que tardo en procesar la funcion fibonacci (mejorada)
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
	//mantiene el programa abierto hasta presionar una tecla
	cout<<"Pulsa una tecla para continuar..."<<endl;
    getch();
    //libera la memoria de a
    delete []a;
}
