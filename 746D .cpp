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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll g,b;
    cin>>n>>k>>g>>b;
    p=abs(g-b);
    if(p)
        p--;
    ll dhur=(min(g,b)+1);
    ll op=p/dhur;
    if(p%dhur)
    {
        op++;
    }
    //cout<<op<<" "<<k<<endl;
    if((op+1)>k)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    string gr,bl;
    for(i=1;i<=n;i++)
    {
        gr+='G';
        bl+='B';
    }
    string ptr;
    if(g>b)
    {
        ll cur=0;
        for(i=1; i<=b; i++)
        {
            str+='G';
            str+='B';

        }
        str+='G';
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='G')
            {
                ptr+='G';
                l=min(p,k-1);
                ptr+=gr.substr(0,l);
                p-=l;
            }
            else ptr+=str[i];
        }
    }
    else
    {
        for(i=1; i<=g; i++)
        {
            str+='B';
            str+='G';

        }
        if(b>g)
        {
            str+='B';
        }
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='B')
            {
                ptr+='B';
                l=min(p,k-1);
                ptr+=bl.substr(0,l);
                p-=l;
            }
            else ptr+=str[i];
        }
    }
    cout<<ptr<<"\n";
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

