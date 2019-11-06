
#include <iostream>
//#define nmax 101
using namespace std;
const int nmax=101;
int n,v[nmax],mini=99999,maxi;
void dei(int s,int d,int &maxi,int &mini)
{
    int m,max1,max2,min1,min2;
    if(s==d)
    {
        maxi=v[d];
         mini=v[s];
    }
    else
    {
        m=(s+d)/2;
        dei(s,m,max1,min1);
        dei(m+1,d,max2,min2);
        if(max1>max2)
            maxi=max1;
        else
            maxi=max2;
            if(min1<min2)
                mini=min1;
            else
                mini=min2;

    }
}
int main()
{
 cin>>n;
for(int i=1;i<=n;i++)
    cin>>v[i];
    dei(1,n,maxi,mini);
cout<<maxi<<" "<<mini;
    return 0;
}
