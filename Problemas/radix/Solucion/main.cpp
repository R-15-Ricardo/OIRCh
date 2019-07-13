#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[])
{
    int n,m;
    cin>>n>>m;
    string cad[m];
    for (int i=0;i<m;i++) cin>>cad[i];

    for (int i=n-1;i>=0;i--)
    {
        stack <string> aux0;
        stack <string> aux1;
        stack <string> ones;
        stack <string> zeros;

        for (int j=0;j<m;j++)
        {
            if (cad[j].at(i)=='0') aux0.push(cad[j]);
            else if (cad[j].at(i)=='1') aux1.push(cad[j]);
        }

        while (!aux1.empty())
        {
            ones.push(aux1.top());
            aux1.pop();
        }

        while (!aux0.empty())
        {
            zeros.push(aux0.top());
            aux0.pop();
        }

        int index=0;
        while (!ones.empty())
        {
            cad[index]=ones.top();
            ones.pop();
            index++;
        }
        while (!zeros.empty())
        {
            cad[index]=zeros.top();
            zeros.pop();
            index++;
        }
    }

    for (int i=0;i<m;i++) cout<<cad[i]<<endl;

    return 0;
}
