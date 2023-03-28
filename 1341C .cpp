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
map<ll,ll>mp,pos,pp;
void solve()
{
    ll i,j,n,m,k,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]=i;
    }
    ll cur=mp[1];
    ll res=2;
    ll p=n;
    n--;
    pp[cur]=1;
    while(n&&res<=p)
    {
        while(cur+1<=p&&pp[cur+1]==0)
        {
            cur++;
            if(aarray[cur]!=res)
            {
                //cout<<cur<<" "<<res<<endl;
                cout<<"NO"<<"\n";
                return ;
            }
            res++;
            pp[cur]=1;
            n--;
        }
        cur=mp[res];
        res++;
        pp[cur]=1;
        n--;
    }
    cout<<"YES"<<"\n";
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
        mp.clear();
        pp.clear();
        solve();
    }

    return 0;
}

