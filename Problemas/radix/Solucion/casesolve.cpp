#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[])
{
    FILE* in;
    in=fopen(argv[1],"r");
    if (!in) return 0;
    int n,m;
    fscanf(in,"%d %d",&n,&m);
    string cad[m];
    cout<<"reading strings"<<endl;
    for (int i=0;i<m;i++)
    {
        char auxstring[n+1];
        fscanf(in,"%s",auxstring);
        cad[i]=string(auxstring);
    }
    cout<<"Done!"<<endl;

    cout<<"Sorting"<<endl;
    clock_t c;
    c=clock();
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
        //cout<<n-1-i<<"'s column done!"<<endl;
    }
    c=clock()-c;
    cout<<"Done in"<<c/CLOCKS_PER_SEC;

    FILE* out;
    string name(argv[1]);
    name.erase(name.end()-3,name.end());
    name+=".out";
    out=fopen(name.c_str(),"w");
    for (int i=0;i<m;i++)
    {
        fprintf(out,"%s\n",cad[i].c_str());
    }
    fclose(out);
    return 0;
}
