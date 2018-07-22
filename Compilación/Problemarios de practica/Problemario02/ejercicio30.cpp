#include <iostream>

using namespace std;

int main()
{
	int estatura;
	int peso;
 	int edad;

	cout<<"estatura(cm)? ";
	cin>>estatura;
	cout<<"peso? ";
	cin>>peso;
	cout<<"edad? ";
	cin>>edad;
	
	if(estatura<=150 && 40<=peso && peso<=60 && 18<=edad)
	{
		cout<<"Bienvenido a los enanitos"<<endl;
	}
	else
	{
		cout<<"No eres aceptado"<<endl;
	}
}
