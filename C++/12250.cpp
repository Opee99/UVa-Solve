#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(1)
    {
        static long long int c=1;
        cin>>s;
        if(s=="#")
        {
            break;
        }
        if(s=="HELLO")
        {

            printf("Case %lld: ENGLISH\n",c);
        }
        else if(s=="HOLA")
        {

            printf("Case %lld: SPANISH\n",c);
        }
        else if(s=="HALLO")
        {

            printf("Case %lld: GERMAN\n",c);
        }

        else if(s=="BONJOUR")
        {

            printf("Case %lld: FRENCH\n",c);
        }
        else if(s=="CIAO")
        {

            printf("Case %lld: ITALIAN\n",c);
        }
        else if(s=="ZDRAVSTVUJTE")
        {

            printf("Case %lld: RUSSIAN\n",c);
        }
        else
        {
            printf("Case %lld: UNKNOWN\n",c);
        }

        c++;
    }



}

