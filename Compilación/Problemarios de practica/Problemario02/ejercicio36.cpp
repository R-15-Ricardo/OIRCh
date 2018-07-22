#include <iostream>

using namespace std;

int main()
{
	int nip;
	int pass = 12345;
	int num1;
	int num2;

	cout<<"Dame NIP? ";
	cin>>nip;

	if(nip==pass)
	{
		cout<<"Bienvenido"<<endl;
		cout<<"Dame un numero: "<<endl;
		cin>>num1;
		cout<<"Dame otro numero: "<<endl;
		cin>>num2;
		cout<<"El promedio es: "<<(num1+num2)/2.0<<endl;
	}
	else
	{
		cout<<"Error contrasena nvalida"<<endl;
	}	
	
}
