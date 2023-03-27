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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
ll one[1000000+100];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>k;
    cin>>str;
    n=str.size();
    if(k>n)
    {
        cout<<0<<"\n";
        return ;
    }
    one[n]=n;
    for(i=n-1; i>=0; i--)
    {
        if(str[i]=='1')
        {
            v.push_back(i);
            one[i]=i;
        }
        else
            one[i]=one[i+1];
    }
    ll oc=0;
    ll pre=0;
    ans=0;
    if(k==0)
    {
        ll cur=0;
        str[n]='1';
        for(i=0; i<=n; i++)
        {
            if(str[i]=='0')
            {
                cur++;
            }
            else
            {
                sum+=(cur*(cur+1))/2;
                cur=0;
            }
        }
        cout<<sum<<"\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        if(str[i]=='1')
        {
            oc++;
        }
        if(oc==k)
        {

            l=v.back()-pre;
            r=(l+1)*(one[i+1]-i);
            ans+=r;
            pre=v.back()+1;
            v.pop_back();
            oc--;
        }
        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

