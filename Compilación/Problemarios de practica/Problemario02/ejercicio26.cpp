#include <iostream>

using namespace std;

int main()
{
	int temperatura;

	cout<<"Temperatura? ";
	cin>>temperatura;

	if (temperatura >=30)
	{
		cout<<"playera sin mangas y short"<<endl;
	}
	else if(temperatura >15)
	{
		cout<<"Playera y jeans"<<endl;
	}
	else if(temperatura<0)
	{
		cout<<"gabardina y calentadores"<<endl;
	}
	else
	{
		cout<<"sweter y pantalon"<<endl;
	}


	return 0;
}
