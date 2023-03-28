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
ll n,m,k,a;
set<ll>sl;
ll a1[100000+10],a2[100000+10];
void solve()
{
    cin>>n;
    ll i,j;
    for(i=0;i<=n+1;i++)
    {
        a1[i]=a2[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin>>k;
        ll c=0;
        for(j=1; j<=k; j++)
        {
            cin>>a;
            if(a1[i]==0&&a2[a]==0)
            {
                a1[i]=1;
                a2[a]=1;
            }
        }
    }
    ll c=0,d=0,aa,ab;
    for(i=1;i<=n;i++)
    {
        if(a1[i]==0)
        {
            c=1;
            aa=i;
        }
        if(a2[i]==0)
        {
            d=1;
            ab=i;
        }
        if(c&&d)
        {
            cout<<"IMPROVE"<<endl;
            cout<<aa<<" "<<ab<<endl;
            return ;
        }
    }
    //cout<<mp[1]<<endl;
    cout<<"OPTIMAL"<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}


