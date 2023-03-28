///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    l=(k*(k+1)/2);
    if(n<l)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    n-=l;
    for(i=0; i<k; i++)
    {
        aarray[i]=i+1+(n/k)+(i>=k-n%k);
    }
    if(n!=k-1)
    {
        cout<<"YES"<<"\n";
        for(i=0; i<k; i++)
        {
            cout<<aarray[i]<<" ";
        }
        return ;
    }
    if(k==2||k==3)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    else if(k>3)
    {
        aarray[1]--;
        aarray[k-1]++;
    }
    cout<<"YES"<<"\n";
    for(i=0; i<k; i++)
    {
        cout<<aarray[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
