#include<stdio.h>

int main()
{
   long long int a,b,i,j,max1,c=0,temp;
   while(scanf("%lld%lld",&a,&b)==2 && a>0 && b>0 )
   {
       max1=0;
       printf("%lld %lld ",a,b);
       if(a>b)
       {
           temp=a;
           a=b;
           b=temp;
       }
       for(i=a;i<=b;i++)
       {
           c=1;
           for(j=i;j!=1;)
           {
               if(j%2!=0)
               {
                   j=3*j +1;
               }
               else
               {
                   j=j/2;
               }
               c++;
           }
           if(c>=max1)
           {
              max1=c;
           }

       }
       printf("%lld\n",max1);

   }


}

