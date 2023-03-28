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
set<char>s[N];
ll pb[N],pa[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    ll aa=0,bb=0;
    for(i=0; i<n; i++)
    {
        if(str[i]=='b')
        {
            pb[i+1]=pb[i]+1;
        }
        else
        {

             pb[i+1]=pb[i];
        }
        if(str[i]=='a')
        {

            pa[i+1]=pa[i]+1;
        }
        else
        {
            pa[i+1]=pa[i];
        }
        if(str[i]=='a')
        {
            aa++;
        }
        else bb++;
    }
    ans=0;

    for(i=0; i<n; i++)
    {
        k=pb[i+1];
        for(j=i+1; j<n; j++)
        {
            l=pa[i+1];
            r=pa[j+1]-l;
            q=pb[n]-pb[j+1];
            ll op=n-(r+q+k);
            ans=max(ans,op);
            //cout<<i<<" "<<j<<" "<<op<<" "<<l<<" "<<r<<" "<<q<<endl;
        }
        //cout<<i<<" "<<ans<<endl;
    }
    //cout<<ans<<endl;
    for(j=0; j<n; j++)
    {
        l=pa[0];
        r=pa[j]-l;
        q=pb[n]-pb[j];
        ll op=n-(r+q);
        ans=max(ans,op);
        //cout<<i<<" "<<j<<" "<<op<<" "<<l<<" "<<r<<" "<<q<<endl;
    }
    aa=max(aa,bb);
    ans=max(ans,aa);
    cout<<ans<<"\n";
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

