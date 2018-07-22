#include <iostream>

using namespace std;

int main()
{
	int edad;

	cout<<"Cuantos años tienes"<<endl;
	cin>>edad;
	
	if(edad>17)
	{
		cout<<"puedes pasar a la fiesta, bienvenido"<<endl;
	}
	else
	{
		cout<<"Lo sentimos no puedes ingresar"<<endl;
	}

	return 0;
}
