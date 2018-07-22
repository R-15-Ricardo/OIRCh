#include <iostream>

using namespace std;

//20, 10, 5, 1

int main()
{	
	int dinero;

	cout<<"Cantidad de dinero a fraccionar: ";
	cin>>dinero;
	
	cout<<"monedas de 20: "<<dinero/20<<endl;
	dinero-=(dinero/20)*20;
	cout<<"monedas de 10: "<<dinero/10<<endl;
	dinero-=(dinero/10)*10;
	cout<<"monedas de 5: "<<dinero/5<<endl;
	dinero-=(dinero/5)*5;
	cout<<"monedas de 1: "<<dinero<<endl;


	return 0;
}
