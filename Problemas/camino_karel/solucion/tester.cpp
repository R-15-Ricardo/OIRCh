#include <bits/stdc++.h>
using namespace std;

bool adj[1010][1010];
void marker (int,int,int*);

int main (int argc, char *argv[])
{
    FILE* in;

    if (argc<2) cout<<"Need valid argument!"<<endl;

    in=fopen(argv[1],"r");
    if (!in)
    {
        perror("Invalid file!");
        return 0;
    }

    int n,p;
    fscanf(in,"%d %d",&n,&p);

    for (int i=0;i<p;i++)
    {
        int a,b;
        fscanf(in,"%d %d",&a,&b);
        adj[a][b]=1;
        adj[b][a]=1;
    }

    int *check;
    int cont=0;
    check=new int [n];

    cout<<"Processing map..."<<endl;
    for (int i=1;i<=n;i++)
    {
        if (!check[i])
        {
            marker(n,i,check);
            cont++;
        }
    }
    cout<<"Done!"<<endl;

    fclose(in);

    string name(argv[1]);
    name.erase(name.end()-3,name.end());
    name+=".out";

    FILE* out;
    out=fopen(name.c_str(),"w");
    if (!out) return 0;

    fprintf(out,"%d\n",cont-1);

    fclose(out);

    if (argc==3)
    {
        string testc="cat ";
        testc+=name;

        string last(argv[2]);
        if (last=="-p") system(testc.c_str());
    }

    return 0;
}

void marker (int n,int at,int *check)
{
    queue <int> tracker;
    tracker.push(at);
    check[at]=1;

    while (!tracker.empty())
    {
        int now=tracker.front();
        tracker.pop();
        for (int i=1;i<=n;i++)
        {
            if (adj[now][i] && !check[i])
            {
                check[i]=1;
                tracker.push(i);
            }
        }
    }
}
