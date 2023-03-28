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
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>str;
    string a;
    ll ans[n+5];
    ll p[n+5];
    for(i=0; i<=n+1; i++)
    {
        p[i]=0;
    }
    a=str;
    sort(a.begin(),a.end());
    if(a==str)
    {
        for(i=1; i<=n; i++)
        {
            cout<<1;
        }
        cout<<"\n";
        return ;
    }
    p[0]=str[0]-'0';
    ans[0]=-1;
    for(i=1; i<n; i++)
    {
        p[i]=max(ll(str[i]-'0'),p[i-1]);
        ans[i]=-1;
    }
    m=p[n-1];
    ll mi=INT_MAX;
    for(i=n-1; i>=0; i--)
    {
        if((str[i]-'0')==m)
        {
            ans[i]=2;
            for(j=i-1; j>=0; j--)
            {
                if(j==0)
                {
                    if(str[j]-'0'<=m)
                    {
                        if(mi!=INT_MAX)
                        {
                            if(str[j]-'0'>mi)
                            {
                                ans[j]=2;
                            }
                        }
                        else
                        {
                            ans[j]=2;
                        }
                    }
                }
                if(str[j]-'0'<=m&&j-1>=0&&p[j-1]<=(str[j]-'0'))
                {
                    if(mi!=INT_MAX)
                    {
                        if(str[j]-'0'>mi)
                        {
                            ans[j]=2;
                            m=str[j]-'0';
                        }
                    }
                    else
                    {
                        ans[j]=2;
                        m=str[j]-'0';
                    }
                }
                else
                {
                    mi=min(mi,ll(str[j]-'0'));
                }
            }
            break;
        }
        else
        {
            mi=min(mi,ll(str[i]-'0'));
        }
    }
    string b;
    a.clear();
    for(i=0; i<n; i++)
    {
        if(ans[i]==-1)
        {
            ans[i]=1;
            a+=str[i];
        }
        else b+=str[i];
        //cout<<ans[i]<<" ";
    }
    /*for(i=0; i<n; i++)
    {
        cout<<ans[i];
    }*/
    string c,d,e;
    c=a+b;
    d=c;
    sort(d.begin(),d.end());
    //cout<<c<<" "<<d<<endl;
    if(c!=d)
    {
        cout<<'-'<<"\n";
        return ;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            cout<<ans[i];
        }
        cout<<"\n";
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
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }

    return 0;
}


//1
//10
//1245658899
