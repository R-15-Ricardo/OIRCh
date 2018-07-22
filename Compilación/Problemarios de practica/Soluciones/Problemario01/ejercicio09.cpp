#include <iostream>

using namespace std;

int main()
{
	int mate;
	int espa;
	int cocina;

	cout<<"Dame calificacion de matematicas: ";
	cin>>mate;
	cout<<"Dame calificacion de espanol: ";
	cin>>espa;
	cout<<"Dame calificacion de concina: ";
	cin>>cocina;
	
	cout<<"El promedio es: "<<(float)(mate+espa+cocina)/3<<endl;
	return 0;
}
