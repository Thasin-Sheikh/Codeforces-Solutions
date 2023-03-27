///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,s1,s2,s,ss;
    ll i,j,n,m,k,t;
    cin>>str>>s1>>s2;
    bool ok=false;
    for(i=0;i<str.length();i++)
    {
        s=str.substr(i,s1.size());
        //cout<<s<<endl;
        if(s==s1)
        {
            ll in=i+(s1.size()-1);
            for(j=in+1;j<str.length();j++)
            {
                //cout<<ss<<endl;
                ss=str.substr(j,s2.size());
                if(ss==s2)
                {
                    ok=true;
                    break;
                }

            }
        }
        if(ok)
            break;
    }
    reverse(str.begin(),str.end());
    bool yes=false;
    for(i=0;i<str.length();i++)
    {
        s=str.substr(i,s1.size());
        if(s==s1)
        {
            ll in=i+(s1.size()-1);
            for(j=in+1;j<str.length();j++)
            {
                ss=str.substr(j,s2.size());
                if(ss==s2)
                {
                    yes=true;
                    break;
                }

            }
        }
        if(yes)
            break;
    }
    //cout<<ok<<" "<<yes<<endl;
    if(ok&&yes)
    {
        cout<<"both"<<endl;
    }
    else if(ok)
        cout<<"forward"<<endl;
    else if(yes)
        cout<<"backward"<<endl;
    else cout<<"fantasy"<<endl;
}
