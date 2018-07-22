#include <iostream>

using namespace std;

int main()
{
	char nombre[30];
	
	cout<<"Cual es tu nombre? ";
	cin.getline(nombre,sizeof(nombre));
	cout<<endl<<nombre<<endl;
	
	
	return 0; 
}
