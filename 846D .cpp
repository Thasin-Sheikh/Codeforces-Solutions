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
map<ll,ll>mp,pp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    for(i=1; i<=n; i++)
    {
        if(mp[i]==0)
        {
            v.push_back(i);
        }
    }
    ll cou=0;
    sort(v.rbegin(),v.rend());
    cou=v.size();
    for(i=1; i<=n; i++)
    {
        if(mp[aarray[i]]>1)
        {
            if(aarray[i]>v.back())
            {
                mp[aarray[i]]--;
                aarray[i]=v.back();
                v.pop_back();
            }
            else
            {
                if(pp[aarray[i]]==0)
                {
                    pp[aarray[i]]++;
                }
                else
                {
                    mp[aarray[i]]--;
                    aarray[i]=v.back();
                    v.pop_back();
                }
            }
        }
    }
    cout<<cou<<"\n";
    for(i=1; i<=n; i++)
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

