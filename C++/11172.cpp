#include<stdio.h>
int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a>b)
        {
            printf(">");
        }
        else if (a<b)
        {
             printf("<");
        }
        else
        {
             printf("=");
        }
        printf("\n");

    }

}
