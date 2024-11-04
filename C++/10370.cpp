#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int j,n,a[1002],s,c;
    int t,i;
    float avg,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        s=0;
        c=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>a[j];
            s+=a[j];
        }
        avg=(float)s/n;
        for(j=1;j<=n;j++)
        {

        if(avg<a[j])
        {
            c++;
        }
        }
        ans=(float)c/n*100;
        printf("%.3f%%\n",ans);
    }


}

