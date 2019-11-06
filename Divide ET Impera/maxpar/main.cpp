#include <iostream>

using namespace std;
int n,x,v[20],kx;
int dei(int s,int d)
{
    int m,max1=-1,max2=-1;
    if(s==d)
    {
    if(v[s]%2==0)
            return v[s];
    }
    else
    {
        m=(s+d)/2;
    max1=dei(s,m);
        max2=dei(m+1,d);
if(max1>max2)
    return max1;
else
    return max2;

    }
}
int main()
{
  cin>>n;
for(int i=1;i<=n;i++)
    cin>>v[i];
cout<<dei(1,n);

    return 0;
}
