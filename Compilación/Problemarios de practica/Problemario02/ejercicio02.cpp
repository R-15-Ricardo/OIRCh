#include <iostream>

using namespace std;

int main()
{
	int mat;
	int esp;

	cout<<"Calificacion Matematicas ";
	cin>>mat;
	cout<<"Calficacion espanol ";
	cin>>esp;
	
	if((mat+esp)/2.0>=60)
	{
		cout<<"Bienvenido al Circo"<<endl;
	}
	cout<<"Gracias por venir"<<endl;

	return 0;
}
