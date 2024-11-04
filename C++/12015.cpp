#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,max1,t,a[10];
    string s[10];
    cin>>t;
    for(i=1;i<=t;i++)
    {

        for(j=0;j<10;j++)
        {
            cin>>s[j]>>a[j];
        }
        max1=a[0];
        for(j=0;j<10;j++)
        {
            if(max1<a[j])
            {
                max1=a[j];
            }
        }
        cout<<"Case #"<<i<<":\n";
        for(j=0;j<10;j++)
        {
            if(max1==a[j])
            {

                cout<<s[j]<<endl;
            }
        }

    }

}


