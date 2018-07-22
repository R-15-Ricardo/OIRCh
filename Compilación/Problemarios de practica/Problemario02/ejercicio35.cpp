#include <iostream>

using namespace std;

int main()
{
	unsigned int cont = 0;
	char aux;
	
	cout<<"pregunta 1 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 2 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 3 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 4 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 5 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 6 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 7 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 8 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 9 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;
	cout<<"pregunta 10 (s/n): ";
	cin>>aux;
	cont += (aux=='s')?1:0;

	if(cont<=5)
	{
		cout<<"no te conviene"<<endl;
	}
	else if(6<=cont && cont<=8)
	{
		cout<<"pueden ser buenos amigos"<<endl;
	}
	else if(9<=cont && cont<=10)
	{
		cout<<"lanzate sobre ella antes que te la ganen"<<endl;
	}
	
	

	return 0;
}
