#include <iostream>

using namespace std;

int main()
{

	int espanol;
	int ingles;
	int matematicas;
	int cont=0;

	cout<<"espanol: ";
	cin>>espanol;
	cout<<"ingles: ";
	cin>>ingles;
	cout<<"matematicas ";
	cin>>matematicas;

	if(matematicas<60)
	{
		cout<<"No te prestamos el carro"<<endl;
	}
	else
	{
		cont+=(ingles<60)?0:1;
		cont+=(espanol<60)?0:1;
		if(cont>0)
		{
			cout<<"te prestamos el carro"<<endl;
		}
		else
		{
			cout<<"No te lo prestamos"<<endl;
		}
	}	
	

	return 0;
}
