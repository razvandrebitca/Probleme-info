#include <iostream>

using namespace std;
int n,v[101],s1=0;
void dei(int s,int d,int &s1)
{
    int m;
    if(s==d)
    {
    if(v[s]%2==0)
            s1+=v[d];
    }
    else
    {
        m=(s+d)/2;
        dei(s,m,s1);
        dei(m+1,d,s1);


    }
}
int main()
{
 cin>>n;
for(int i=1;i<=n;i++)
    cin>>v[i];
    dei(1,n,s1);
cout<<s1;
    return 0;
}
