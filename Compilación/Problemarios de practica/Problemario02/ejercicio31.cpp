#include <iostream>

using namespace std;

int main()
{
	unsigned int max = 0;
	unsigned int examen=0;
	
	cout<<"logico: ";
	cin>>examen;
	max = (examen>max)?examen:max;
	cout<<"karel: ";
	cin>>examen;
	max = (examen>max)?examen:max;
	cout<<"C: ";
	cin>>examen;
	max = (examen>max)?examen:max;
	
	cout<<"La mayor es "<<max<<endl; 

	

	return 0;
}
