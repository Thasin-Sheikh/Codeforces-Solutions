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
set<ll>s;
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        //s.insert(aarray[i]);
        mp[aarray[i]]++;
    }
    if(n==1)
    {
        cout<<1<<"\n";
        cout<<aarray[0]<<"\n";
        return ;
    }
    ll a,b,c;
    for(i=0;i<n;i++)
    {
        for(j=0;j<32;j++)
        {
            vector<ll>aa;
            a=aarray[i];
            aa.push_back(a);
            b=a+(1<<j);
            if(mp[b])
            {
                //cout<<a<<" "<<b<<endl;
                aa.push_back(b);
            }
            c=a-(1<<j);
            if(mp[c])
            {
                aa.push_back(c);
            }
            if(aa.size()>v.size())
            {
                v=aa;
            }
            aa.clear();
        }
    }
    cout<<v.size()<<"\n";
    for(auto it:v)
    {
        cout<<it<<" ";
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

