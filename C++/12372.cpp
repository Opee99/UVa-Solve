#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,w,h,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
        {
            printf("Case %d: good\n",t);
        }
        else
        {
             printf("Case %d: bad\n",t);
        }
    }
}
