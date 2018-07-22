#include <iostream>

using namespace std;

int main()
{
	int estatura;
	int edad;
	int peso;

	cout<<"estatura? ";
	cin>>estatura;
	cout<<"edad? ";	
	cin>>edad;
	cout<<"peso? ";
	cin>>peso;

	if(estatura>160 && peso>50)
	{
		cout<<"no te acepto 1"<<endl;
		return 0;
	}
	if(estatura<140 && peso>50)
	{
		cout<<"no te acepto 2"<<endl;
		return 0;
	}
	if(edad<15 || edad>18)
	{
		cout<<"no te acepto 3"<<endl;
		return 0;
	}
	cout<<"pasame tu telefono"<<endl;	
	
	
	

	return 0;
}
