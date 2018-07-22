#include <iostream>

using namespace std;

int main()
{
	int edad;

	cout<<"Edad? ";
	cin>>edad;
	
	if(0<=edad && edad<=10)
	{
		cout<<"Dirigete a la Sala A"<<endl;	
	}
	else if(11<=edad && edad<=15)
	{
		cout<<"Dirigete a la sala B"<<endl;
	}
	else if(edad>15)
	{
		cout<<"Dirigete e la sala C"<<endl;
	}
	return 0;
}
