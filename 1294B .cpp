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
void solve()
{
    ll i,j,n,m,a,b;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    ll x=0,y=0;
    string ans;
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(it->first<x||it->second<0)
        {
            cout<<"NO"<<endl;
            return ;
        }
        if(it->second<y)
        {
            cout<<"NO"<<endl;
            return ;
        }
        if(it->first==x)
        {
            ll d1=it->second-y;
            while(d1)
            {
                ans+='U';
                d1--;
            }
        }
        else
        {
            ll d2=it->first-x;
            while(d2)
            {
                ans+='R';
                d2--;
            }
            ll d3=it->second-y;
            while(d3)
            {
                ans+='U';
                d3--;
            }

        }
        x=it->first,y=it->second;
    }
    cout<<"YES"<<endl;
    cout<<ans<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


