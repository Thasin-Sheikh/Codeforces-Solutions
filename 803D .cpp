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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
string str,add;
ll n;
ll bs(ll len)
{
    if(len*n<add.size())
    {
        return false;
    }
    ll i,j,sz;
    sz=add.size();
    ll cnt=0,cur=-1,tot=0;
    for(i=0; i<sz; i++)
    {
        cnt++;
        if(cnt>len)
        {
            if(cur==-1)
            {
                return  false;
            }
            tot++;
            //cout<<len<<" "<<cur<<endl;
            cnt=cnt-cur;
            cur=-1;
        }
        if(add[i]=='-'||add[i]=='0')
        {
            cur=cnt;
        }
    }
    if(cnt)
    {
        tot++;
    }
   // cout<<len<<" "<<tot<<endl;
    if(tot<=n)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    while(cin>>str)
    {

        add+=str;
        add+='0';
    }
    add.pop_back();
    //cout<<add<<endl;
    l=1,r=add.size();
    ans=INT_MAX;
    while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            ans=min(ans,m);
            r=m-1;
        }
        else l=m+1;
    }
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


