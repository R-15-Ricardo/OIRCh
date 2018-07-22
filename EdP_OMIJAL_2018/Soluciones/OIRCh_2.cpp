#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	float p;
	cin>>n>>p;
	int k=(n-1)/2;
	int k1=k*(k+1);
	cout<<p+k1<<endl;
	return 0;
}