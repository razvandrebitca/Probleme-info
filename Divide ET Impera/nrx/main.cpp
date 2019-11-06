#include <iostream>

using namespace std;
int n,x,v[20],k;
void dei(int s,int d,int &k)
{
    int m;
    if(s==d)
    {
    if(v[s]>x)
            k++;
    }
    else
    {
        m=(s+d)/2;
    dei(s,m,k);
        dei(m+1,d,k);


    }
}
int main()
{
  cin>>n>>x;
for(int i=1;i<=n;i++)
    cin>>v[i];
    dei(1,n,k);
    cout<<k;
    return 0;
}
