//Programa que imprime todos los caracteres ASCII

#include <iostream>
using namespace std;
int main() 
{
	//Ciclo for (se repite 255 por la variable "i") 
	for (int i=0;i<255;i=i+1) 
	{
		//imprime el caracter ASCII numero "i"
		cout <<i<<" ASCII: "<<(char)i<<endl;
	}
	return 0;
}

