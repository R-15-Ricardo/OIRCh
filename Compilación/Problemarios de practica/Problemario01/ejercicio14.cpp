#include <iostream>

using namespace std;

int main()
{
	int numeroM;
	int numerom;
	
	cout<<"Numero mayor: ";
	cin>>numeroM;
	cout<<"Numero menor: ";
	cin>>numerom;
	
	cout<<"division Entera "<<(numeroM-(numeroM%numerom))/numerom<<endl;
	cout<<"modulo "<<numeroM%numerom<<endl;
	

	return 0;
}
