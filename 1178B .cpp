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
ll pre[1000000+10];
ll suf[1000000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    string s,s1;
    ll c=0;
    if(str.length()<5)
    {
        cout<<0<<endl;
        return 0;
    }
    s=str;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='v')
        {
            c++;
        }
        else
        {
            if(c>=2)
                pre[i]=c-1;
            c=0;
        }
    }
    c=0;
    for(i=s.length()-1; i>=0; i--)
    {
        if(s[i]=='v')
        {
            c++;
        }
        else
        {
            if(c>=2)
                suf[i]=c-1;
            c=0;
        }
    }
    for(i=1;i<str.length();i++)
    {
        pre[i]+=pre[i-1];
    }
    for(i=str.length()-2;i>=0;i--)
    {
        suf[i]+=suf[i+1];
    }
    ll ans=0;
    for(i=1;i<str.length();i++)
    {
        if(str[i]=='o')
        {
            ans+=pre[i]*suf[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}


