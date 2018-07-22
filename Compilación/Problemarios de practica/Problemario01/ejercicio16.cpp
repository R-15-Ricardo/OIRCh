#include <iostream>

using namespace std;

int main()
{
	int numeroP;
	int intporE;

	cout<<"Cuantos prgramadores: ";
	cin>>numeroP;
	cout<<"cuantos programadores por equipo";
	cin>>intporE;
	
	cout<<"Equipos formados: "<<numeroP/intporE<<endl;
	cout<<"Estudiantes sin equipo: "<<numeroP%intporE<<endl;
}
