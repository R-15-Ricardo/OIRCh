#include <iostream>

using namespace std;

int main()
{
	float area;
	float base;
	float altura;
	
	cout<<"Dame base? ";
	cin>>base;	
	cout<<"Dame altura? ";
	cin>>altura;
	
	area = base*altura/2;
	
	cout<<"El area es: "<<area<<endl;
}
