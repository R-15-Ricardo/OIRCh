#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int numero;
	int resp;

	srand((unsigned)time(NULL));
	
	
	cout<<"Que numero estoy pensando?"<<endl;
	numero = rand()%10+1;
	
	for(int i = 0;i<3;i++)
	{
		cout<<"Que numero crees que estoy pensando(1 al 10)?"<<endl;
		cin>>resp;
		if(numero<resp){cout<<"Tu numero es mayor"<<endl;}
		else if(numero>resp){cout<<"Tu numero es menor"<<endl;}
		else{cout<<"Felicidades"<<endl;return 0;}
	}
	cout<<"Se te acabaron las oportunidades"<<endl;
	

	return 0;
}
