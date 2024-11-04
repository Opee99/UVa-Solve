#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,s;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        s=0;
        for(i=1;i<=n;i++)
        {
            s=s+(i*i);
        }
        cout<<s<<endl;
    }


}

