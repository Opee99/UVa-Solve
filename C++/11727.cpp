
#include<stdio.h>

int main()
{
   long long int a,b,c,mid;
   int t,i;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {

       scanf("%lld%lld%lld",&a,&b,&c);
       if(a>b)
       {
           if(b>c)
           {
               mid=b;
           }
           else
           {
               if(a>c)
                mid=c;
               else
                mid=a;
           }
       }
       else
       {
           if(b<c)
            mid=b;
           else{
            if(a<c)
           {
               mid=c;
           }
           else
           {
               mid=a;
           }
           }
       }
       printf("Case %d: %lld\n",i,mid);
   }

}
