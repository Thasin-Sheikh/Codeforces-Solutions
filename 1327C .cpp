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
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll l[600],r[600];
void solve()
{
    ll i,j,k,m,n,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<char>v;
    cin>>n>>m>>k;
    for(i=1;i<=2*k;i++)
    {
        cin>>l[i]>>r[i];
    }
    for(i=1; i<n; i++)
    {
        v.push_back('U');
    }
    for(i=1; i<m; i++)
    {
        v.push_back('L');
    }
    char ch;
    ll c=1;
   // cout<<v.size()<<endl;
    for(i=1; i<=n; i++)
    {
        if(i%2)
        {
            ch='R';
        }
        else ch='L';
        if(i%2)
        {
            j=1;
            while(j+1<=m)
            {
                v.push_back(ch);
                j++;
            }
        }
        else
        {
            j=m;
            while(j-1>=1)
            {
                v.push_back(ch);
                j--;
            }
        }
        if(i!=n)
            v.push_back('D');
    }
    cout<<v.size()<<"\n";
    for(auto it:v)
    {
        cout<<it;
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


