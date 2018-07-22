#include <iostream>

using namespace std;

int main()
{
	int edad;

	cout<<"Edad? ";
	cin>>edad;

	if(9<=edad && edad<=11)
	{
		cout<<"Junior"<<endl;
	} 
	else if(12<=edad && edad<=15)
	{
		cout<<"Secundaria"<<endl;
	}
	else if(16<=edad && edad<=18)
	{
		cout<<"OMI"<<endl;
	}
	else if(19<=edad && edad<=23)
	{
		cout<<"Universitaria"<<endl;
	}
	else
	{
		cout<<"No es posible tu participacion"<<endl;
	}

	return 0;
}
