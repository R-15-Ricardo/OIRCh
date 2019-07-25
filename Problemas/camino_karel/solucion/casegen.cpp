#include <bits/stdc++.h>
using namespace std;

int main (int argc,char *argv[])
{
    srand((unsigned)time(NULL));
    if (argc<3)
    {
        cout<<"Need a valid case!"<<endl;
        return 0;
    }

    string name(argv[1]);
    name+=".in";

    FILE* f;
    f=fopen(name.c_str(),"w");
    if (!f) return 0;

    int n,p;

    n=atoi(argv[2]);
    p=(rand()%(n-1))+1;

    cout<<"Bridges set: "<<p<<endl;

    int **adj;
    adj=new int* [n+1];
    for (int i=0;i<n+1;i++)
    {
        adj[i]=new int [n+1];
    }

    fprintf(f,"%d %d\n",n,p);

    cout<<"Generating bridges..."<<endl;
    for (int i=0;i<p;i++)
    {
        int a,b;
        do {
            a=rand()%n+1;
            b=rand()%n+1;
        } while ((adj[a][b] && adj[b][a])  || a==b);
        adj[a][b]=1;
        adj[b][a]=1;
        fprintf(f,"%d %d\n",a,b);
    }
    cout<<"Done!"<<endl;

    fclose(f);

    if (argc==4)
    {
        string testc="cat ";
        testc+=name;

        string last(argv[3]);
        if (last=="-p") system(testc.c_str());
    }

    return 0;
}
