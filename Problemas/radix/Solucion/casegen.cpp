#include <bits/stdc++.h>

int main (int argc, char *argv[])
{
    srand((unsigned)time(NULL));
    std::string name(argv[1]);
    name+=".in";
    FILE* f;
    f=fopen(name.c_str(),"w");
    int n,m;
    n=atoi(argv[2]);
    m=atoi(argv[3]);
    fprintf(f,"%d %d\n",n,m);
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            fprintf(f,"%d",rand()%2);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}
