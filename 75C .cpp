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
vector<ll>commn;
ll solve(ll a,ll b)
{
    ll l,h,i,j;
    l=0;
    for(i=commn.size()-1;i>=0;i--)
    {
        if(commn[i]>=a&&commn[i]<=b)
        {
            cout<<commn[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>a>>b;
    cin>>t;
    set<ll>s1,s2;
    ll l,h;
    for(i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            s1.insert(i);
            if(i!=a/i)
            {
                s1.insert(a/i);
            }
        }
    }
    for(i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            s2.insert(i);
            if(b/i!=i)
            {
                s2.insert(b/i);
            }
        }
    }
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        if(s2.find(*it)!=s2.end())
        {
            commn.push_back(*it);

        }
    }
    sort(commn.begin(),commn.end());
    while(t--)
    {
        cin>>l>>h;
        solve(l,h);
    }

    return 0;
}


