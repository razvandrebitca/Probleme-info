#include <iostream>
#include <fstream>
#include<cstring>
#define maxi(a, b) ((a) < (b) ? (b) : (a))
using namespace std;
const int lmax=100000;
ifstream f("charlie.in");
ofstream g("charlie.out");
char a[lmax],s[lmax];
int p,c,i,j,v,Max,S;


int main()
{
f>>p;
f.get();
f.getline(a,sizeof(a));
if(p==1)
{
    c=i=0;
    while(i<strlen(a))
    {
        j=i;
        while(a[j]>a[j+1]&&a[j+1]<a[j+2]&&j+2<strlen(a))
            j+=2;
        if(j-i>=2)
        {
            if(j-i+1>Max){
                Max=j-i+1;
                i=j;
            }
        }
        i++;
    }
    g<<Max<<endl;
}
else
{
    s[1]=a[0];
    s[2]=a[1];
    i=v=2;
    while(i<strlen(a))
    {
        while (a[i] > s[v] && s[v] < s[v-1] && v > 1){

            S+= maxi(a[i]-'a'+1,s[v-1]-'a'+1);
            v--;
        }
s[++v]=a[i];
i++;
    }
}
for(int i=1; i <=v; i++)
        g << s[i];
    g<< "\n";
    g<<S;
    return 0;
}
