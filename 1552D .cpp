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
    vector<ll>v,v1;
    cin>>n;
    set<ll>s;
    ll a;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<0)
        {
            v.push_back(a);
        }
        else
        {
            v1.push_back(a);
        }
        s.insert(a);
    }
    if(s.size()==1)
    {
        cout<<"YES"<<"\n";
        return ;

    }
    if(n==2&&s.size()!=1)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if(v1.size()==n)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if(n==1)
    {
        if(v1[0]==0)
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
        return ;
    }
    for(i=0; i<v.size(); i++)
    {
        v1.push_back(v[i]);
    }
    l=v1.back();
    r=v1[v1.size()-2];
    vector<ll>aa;
    aa.push_back(v1[0]/2);
    aa.push_back(-(v1[0]-(v1[0]/2)));
    for(i=1; i<v1.size()-2; i++)
    {
        aa.push_back(aa[0]-v1[i]);
    }
    for(i=0; i<aa.size(); i++)
    {
        for(j=0; j<=100000; j++)
        {
            if(aa[i]-j==l)
            {
                for(k=0; k<aa.size(); k++)
                {
                    if(aa[k]-j==r)
                    {
                        cout<<"YES"<<"\n";
                        return;
                    }
                }
            }
            if(aa[i]+j==l)
            {
                for(k=0; k<aa.size(); k++)
                {
                    if(aa[k]+j==r)
                    {
                        cout<<"YES"<<"\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO"<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

