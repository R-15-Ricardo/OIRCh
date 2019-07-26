#include <bits/stdc++.h>

using namespace std;

typedef struct ND {
    int x;
    int y;
    int src;
} node;

struct CustomCompare {
    bool operator()(const node& a, const node& b)
    {
        return  < rhs;
    }
};


bool adj[1010][1010];

float dist (node,node);
float dijkstra (int,int,node*,float*);

int main ()
{
    int n,p,goal;
    node* g;

    g=new node [n+1];
    for (int i=0;i<n;i++)
    {
        cin>>g[i].x>>g[i].y;
    }
    for (int i=0;i<p;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    cin>>goal;


    int *d_from1;
    d_from1=new int [n+1];
    dijkstra(g,d_from1);

    int root=g[goal].src;
    while (root!=1)
    {
        cout<<root;
        root=g[root].src;
    }
    cout<<d_from1[goal]<<endl;


    return 0;
}

float dist (node a,node b)
{
    return sqrt(pow(abs(a.x-b.x),2)+pow(abs(a.y-b.y),2));
}

float dijkstra (int start,int g_size,node g[], float d[])
{
    d[start]=0;
    priority_queue <node> track;

    for (int i=1;i<g_size;i++)
    {
        if (i!=start) d[i]=-1;
        g[i].src=-1;
        track.push(g[i]);
    }

}
