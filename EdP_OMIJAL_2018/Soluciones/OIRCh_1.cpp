#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int power=n;
	int z=12345;
	int res=1, x=2;
	while (n>0)
	{
		if (n&1) res=(res*x)%z;
		x=(x*x)%z;
		n=n/2;
	}
	unsigned long long int dn=int((power*log(2))/(log(10)))+1;
	cout<<res<<" "<<dn<<endl;
	return 0;
}