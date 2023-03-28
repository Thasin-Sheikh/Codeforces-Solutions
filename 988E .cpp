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
ll cnt[15];
string ptr;
void countdgt()
{
    for(ll i=0;i<ptr.length();i++)
    {
        cnt[ptr[i]-'0']++;
    }
}
ll ok(char f,char s)
{
    string str=ptr;
    ll n=str.length();
    countdgt();
    if(cnt[f-'0'])
    {
        cnt[f-'0']--;
    }
    else
    {
        return INT_MAX;
    }
    if(cnt[s-'0'])
    {
        cnt[s-'0']--;
    }
    else return INT_MAX;
    ll ans=0,i;
    for(i=n-1;i>=0;i--)
    {
        if(str[i]==s)
        {
            for(ll j=i;j<n-1;j++)
            {
                swap(str[j],str[j+1]);
                ans++;
            }
            break;
        }
    }
    for(i=n-2;i>=0;i--)
    {
        if(str[i]==f)
        {
            ll lagbe=(n-1)-(i+1);
            ans+=lagbe;
            for(ll j=i;j<n-2;j++)
            {
                swap(str[j],str[j+1]);
            }
            break;
        }
    }
    ll k=0;
    while(str[k]=='0')
    {
        ans++;
        k++;
    }
    return ans;
}
void solve()
{
    ll i,j,k,m,n,l,r,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>ptr;
    ans=INT_MAX;
    ans=min(ans,ok('0','0'));
    //cout<<ans<<endl;
    ans=min(ans,ok('2','5'));
    //cout<<ans<<endl;
    ans=min(ans,ok('5','0'));
    //cout<<ans<<endl;
    ans=min(ans,ok('7','5'));
    //cout<<ans<<endl;
    if(ans==INT_MAX)
    {
        cout<<-1<<"\n";
        return ;
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

