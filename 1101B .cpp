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
    string str;
    ll i,j,n,m,k,t;
    string ans;
    cin>>str;
    ll ses=-1,suru=-1;
    bool yes=false;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='[')
        {
            ans+='[';
            for(j=i;j<str.length();j++)
            {
                if(str[j]==':')
                {
                    suru=j;
                    ans+=':';
                    break;
                }
            }
            break;
        }
    }
    if(ans.length()!=2)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=str.length()-1;i>suru;i--)
    {
        if(str[i]==']')
        {
            for(j=i;j>suru;j--)
            {
                if(str[j]==':')
                {
                    ses=j;
                    break;
                }

            }
            break;
        }
    }
    if(ses==-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll c=0;
    for(i=suru+1;i<ses;i++)
    {
        if(str[i]=='|')
            c++;
    }
    c+=4;
    cout<<c<<endl;
    return 0;
}


