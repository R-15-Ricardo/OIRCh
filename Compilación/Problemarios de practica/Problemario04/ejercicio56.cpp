#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	
	for(int i=0;i<5;i++)
	{
		cout<<rand()%10+1<<" ";
	}
	cout<<endl;


	return 0;
}
