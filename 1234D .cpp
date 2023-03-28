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
multiset<ll>s[100];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    for(i=0;i<n;i++)
    {
        s[str[i]-'a'].insert(i);
    }
    cin>>q;
    while(q--)
    {
        cin>>k;
        ans=0;
        if(k==2)
        {
            cin>>l>>r;
            l--,r--;
            for(ll c=0;c<26;c++)
            {
                auto it=s[c].lower_bound(l);
                //cout<<*it<<endl;
                if(it!=s[c].end()&&*it<=r)
                {
                    ans++;
                }
            }
            cout<<ans<<"\n";
        }
        else
        {
            char ch;
            cin>>l>>ch;
            l--;
            s[str[l]-'a'].erase(l);
            str[l]=ch;
            s[ch-'a'].insert(l);
        }
    }
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
