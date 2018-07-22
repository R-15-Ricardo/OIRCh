//Programa que encuentra la raiz cuadrada de un entero
#include <iostream>
using namespace std;
//Funcion raiz cuadrada
float raizC(float raiz)
{
	/*define a y si y cuando el producto de a por a 
	es igual al numero en la funcion raiz, regresa a*/
	float a=0;
	while (a*a!=raiz)
	{
		a=a+1;
		
	}
	//regresa a
	return a;
}
//funcion main (Principal)
int main()
{
	//llama la funcion raiz cuadrada
	int b=raizC(9);
	//imprime la raiz cuadrada
	cout <<b<<endl;
}


