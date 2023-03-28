///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;

int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,n=INT_MIN,eat=0,l,t,i,j,barry[100000+10],f,a,b,array[100000+10],ans=0,x,y,t2,c,k;
    cin>>t;
    while(t--)
    {
        cin>>a;
        f=0;
        for(i=2; i*i<=a; i++)
        {
            if(a%i==0)
            {
                x=i;
                y=a/i;
                break;
            }
        }

        for(i=2; i*i<=y; i++)
        {
            if(y%i==0&&i!=x)
            {
                n=y/i;
                break;

            }
        }
        ll dc=a/(n*x);
        if(dc>1&&x*n*dc==a&&dc!=n&&dc!=x)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<n<<" "<<dc<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


}
