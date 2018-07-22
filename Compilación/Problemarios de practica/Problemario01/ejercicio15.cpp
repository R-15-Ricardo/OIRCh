#include <iostream>

using namespace std;

int main()
{
	int numeroP;
	
	cout<<"Numero de programadores ";
	cin>>numeroP;
	
	cout<<"Equipos formados: "<<numeroP/3<<endl;
	cout<<"Programadores sin equipo: "<<numeroP%3<<endl;
}
