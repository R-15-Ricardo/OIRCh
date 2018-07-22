#include <iostream>

using namespace std;

int main()
{
	char nombre[20];
	
	cout<<"Cual es la primera letra de tu nombre: ";
	cin>>nombre;
	
	cout<<"Tu nombre inicia con la letra ";
	cout<<nombre[0]<<endl;


	return 0;
}
