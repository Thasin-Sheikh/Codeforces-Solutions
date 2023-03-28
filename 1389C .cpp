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
bool ok[1000001];
ll solve(ll a, ll b, string str)
{
    ll cur=0;
    for(ll i=0; i<str.length(); i++)
    {
        if(str[i]-'0'==a)
        {
            cur++;
            swap(a,b);
        }
    }
    if(cur%2==1&&a!=b)
        cur--;
    return cur;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll ans=0;
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                ll aa=solve(i,j,str);
                ans=max(ans,aa);
            }
        }
        cout<<ll(str.length())-ans<<endl;
    }

    return 0;
}


