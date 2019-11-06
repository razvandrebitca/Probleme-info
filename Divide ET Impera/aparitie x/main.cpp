#include <iostream>

using namespace std;
int n,x,v[20],kx;
void dei(int s,int d,int &kx)
{
    int m;
    if(s==d)
    {
    if(v[s]==x)
            kx++;
    }
    else
    {
        m=(s+d)/2;
    dei(s,m,kx);
        dei(m+1,d,kx);


    }
}
int main()
{
  cin>>n>>x;
for(int i=1;i<=n;i++)
    cin>>v[i];
    dei(1,n,kx);
    cout<<kx;
    return 0;
}
