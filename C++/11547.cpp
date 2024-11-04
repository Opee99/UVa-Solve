#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int s,n,count;
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%lld",&n);
        s =(n*567/9+7492)*235/47-498;
        count=0;
        while(s!=0)
        {

            if(count==1)
            {
                printf("%d",abs(s%10));
                break;
            }
            s=s/10;
            count++;
        }
    }


}
