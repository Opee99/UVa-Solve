#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a<b)
        {
            b=b-a;

        }
        else
        {
            b=a-b;
        }
        printf("%lld\n",b);
    }
}
