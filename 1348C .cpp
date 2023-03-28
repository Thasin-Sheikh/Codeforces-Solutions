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
    string str,a,b;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    cin>>str;
    sort(str.begin(),str.end());
    set<char>sc;
    if(k==1)
    {
        cout<<str<<"\n";
        return ;
    }
    if(str[0]!=str[k-1])
    {
        cout<<str[k-1]<<"\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        sc.insert(str[i]);
    }
    if(sc.size()==1)
    {
        l=n/k;
        if(n%k)
        {
            l++;
        }
        l--;
        for(i=0; i<=l; i++)
        {
            cout<<str[i];
        }
        cout<<"\n";
        return ;
    }
    cout<<str[0];
    if(str[k]!=str[n-1])
    {
        for(i=k;i<n;i++)
        {
            cout<<str[i];
        }
        cout<<"\n";
        return ;
    }
    n--;
    l=n/k;
    for(i=0;i<l;i++)
    {
        cout<<str[k];
    }
    cout<<'\n';
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
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
