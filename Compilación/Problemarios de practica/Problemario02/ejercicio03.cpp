#include <iostream>

using namespace std;

int main()
{
	int mat;
	int quim;

	cout<<"Calificacion matematicas: ";
	cin>>mat;
	cout<<"Calificacion quimica: ";
	cin>>quim;

	if(mat>=60 && quim==100)
	{
		cout<<"Si vas a la fiesta"<<endl;
	}
	cout<<"Gracias"<<endl;

	return 0;
}
