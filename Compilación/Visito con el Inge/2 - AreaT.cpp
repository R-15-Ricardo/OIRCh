//programa que calcula el area de un triangulo con una funcion 
#include <iostream>
using namespace std;

//funcion area del triangulo. Toma valor de base y de altura
float areaT(float b,float h)
{
	//calcula en aux el area del triangulo
	float aux;
	aux=(h*b)/2;
	//regresa aux
	return aux;
}
//funcion main (principal)
int main()
{
	//LLama la funcion area del triangulo
	float a=areaT(2,4);
	//imprime el area 
	cout <<a<<endl;
}

