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
using ll=long long int  ;
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
    ll i,j,n,m,l,r,ans;
    ans=INT_MAX;
    ll x=0,y=0;
    string str;
    cin>>n>>str;
    map<pair<ll,ll>,ll>mp;
    mp[{0,0}]=-1;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='L')
            x--;
        else if(str[i]=='R')
            x++;
        else if(str[i]=='U')
            y++;
        else y--;
        if(mp.find({x,y})!=mp.end())
        {
            ll d=i-mp[{x,y}];
            if(d<ans)
            {
                ans=d;
                //cout<<mp[{x,y}]<<endl;
                l=mp[{x,y}]+2;
                r=i+1;
            }
            mp[{x,y}]=i;
        }
        else mp[{x,y}]=i;

    }
    if(ans==INT_MAX)
    {
        cout<<-1<<"\n";
        return ;
    }
    cout<<l<<" "<<r<<"\n";
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
