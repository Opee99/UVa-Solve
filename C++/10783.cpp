#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,i,j,a,b,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        s=0;
        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
            {
                s=s+j;
            }
        }
        printf("Case %d: %d\n",i,s);
    }
}
