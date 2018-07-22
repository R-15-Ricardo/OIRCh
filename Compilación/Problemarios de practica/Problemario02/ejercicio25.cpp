#include <iostream>

using namespace std;

int main()
{
	int logica;
	int karel;
	int c;
	float promedio;

	cout<<"Examen Logica"<<endl;
	cin>>logica;
	cout<<"Examen karel"<<endl;
	cin>>karel;
	cout<<"Examen C"<<endl;
	cin>>c;

	promedio = (logica+karel+c)/3.0;

	if(promedio>=220)
	{
		cout<<"Eres nono, felicidades, estas en la final"<<endl;
	}
	else
	{
		cout<<"no eres finalista!, tu promedio fue: "<<promedio<<endl;
		cout<<"Lo sentimon"<<endl;
	}
	
}
