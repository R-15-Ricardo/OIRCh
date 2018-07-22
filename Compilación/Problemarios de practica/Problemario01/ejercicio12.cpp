#include <iostream>

using namespace std;

int main()
{
	float pesos;
	float tipoCambio;
	float Dolares;
	
	cout<<"Dame pesos? ";
	cin>>pesos;
	cout<<"Dame tipo de cambio? ";
	cin>>tipoCambio;
	cout<<"Cantidad de dolares es: "<<pesos/tipoCambio<<endl;

	return 0;
}
