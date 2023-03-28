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
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>ans;
    cin>> n;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r;
        v[i].push_back(l);
        v[i].push_back(r);
    }
    ans.push_back(1);
    ll cur=0;
    ll a,b,c;
    a=ans[cur];
    b=v[a].back();
    c=v[a][0];
    if(v[b].back()==c||v[b][0]==c)
    {
        ans.push_back(b);
        ans.push_back(c);
    }
    else
    {
        ans.push_back(c);
        ans.push_back(b);
    }
    while(ans.size()<n)
    {
        cur++;
        ll cp=cur+1;
        a=ans[cur];
        b=v[a].back();
        c=v[a][0];
        if(b==ans[cp])
        {
            ans.push_back(c);
        }
        else ans.push_back(b);
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
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
