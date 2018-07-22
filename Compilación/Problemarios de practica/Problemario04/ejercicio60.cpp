#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int pass;
	int dinero=20;
	int num;
	char resp='s';
	
	for(;resp=='s';)
	{
		pass = rand()%4+1;
		cout<<"Dame un nuemero del 1 al 4:    ";
		cin>>num;
		if(pass==num)
		{
			dinero+=5;
			cout<<"Ganaste, tu dinero es: ";			
		}
		else
		{
			dinero-=5;
			cout<<"Perdiste, tu dinero es: ";			
		}
		cout<<dinero<<endl;
		cout<<"Quieres continuar(s/n)? ";
		cin>>resp;
	}
	cout<<"Gracias por jugar, tu saldo es: "<<dinero;

	return 0;
}
