#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int compu = rand()%3+1;
	int usuario;
	
	cout<<"La computadora genero un numero entre el 1 y el 3 cual crees que fue? ";
	cin>>usuario;
	
	if(usuario == compu)
	{
		cout<<"FELICIDADES";
	}
	else
	{
		cout<<"Lo siento mucho";
	}
	cout<<endl;
	
	
	return 0;
}
