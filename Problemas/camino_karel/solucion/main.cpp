#include <bits/stdc++.h>
using namespace std;

bool adj[1010][1010];
void marker (int,int,int*);

int main ()
{
    int n,p;
    cin>>n>>p;
    for (int i=0;i<p;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    cout<<endl;

    int *check;
    int cont=0;
    check=new int [n];

    for (int i=1;i<=n;i++)
    {
        if (!check[i])
        {
            marker(n,i,check);
            cont++;
            cout<<endl;
        }
    }

    cout<<cont-1<<endl;

    return 0;
}

void marker (int n,int at,int *check)
{
    cout<<"Finding CC"<<endl;
    queue <int> tracker;
    tracker.push(at);
    check[at]=1;

    while (!tracker.empty())
    {
        int now=tracker.front();
        tracker.pop();
        cout<<"Visiting "<<now<<"'s neightbourhood..."<<endl;
        for (int i=1;i<=n;i++)
        {
            if (adj[now][i] && !check[i])
            {
                cout<<"adding "<<i<<" to queue..."<<endl;
                check[i]=1;
                tracker.push(i);
            }
        }
    }
    cout<<"CC limited"<<endl;
}
