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
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    ll fs=0,es=0;
    fs+=(str[0]-'0');
    fs+=(str[1]-'0');
    fs+=(str[2]-'0');
    es+=(str[3]-'0');
    es+=(str[4]-'0');
    es+=(str[5]-'0');
    if(es==fs)
    {
        cout<<0<<"\n";
        return ;
    }
    ans=3;
    for(i=0; i<6; i++)
    {
        for(j=i; j<6; j++)
        {
            //cout<<i<<" "<<j<<endl;
            if(i==j)
            {
                if(i<3)
                {
                    if(es>fs)
                    {
                        ll t=fs-(str[i]-'0');
                        if(t+9>=es)
                        {
                            cout<<1<<"\n";
                            return ;
                        }
                    }
                    else
                    {
                        ll t=fs-(str[i]-'0');
                       // cout<<t<<endl;
                        if(t<=es)
                        {
                            cout<<1<<"\n";
                            return ;
                        }
                    }
                }
                else
                {
                    if(es>fs)
                    {
                        ll t=es-(str[i]-'0');
                        if(t<=fs)
                        {
                            cout<<1<<"\n";
                            return ;
                        }
                    }
                    else
                    {

                        ll t=es-(str[i]-'0');
                        t+=9;
                        //cout<<i<<""<<t<<endl;
                        if(t>=fs)
                        {
                            cout<<1<<"\n";
                            return ;
                        }
                    }
                }
            }
            else if(i<3&&j<3)
            {
                if(es>fs)
                {
                    ll t=fs-(str[i]-'0')-(str[j]-'0');
                    if(t+18>=es)
                    {
                        ans=min(ans,2LL);
                    }
                }
                else
                {
                    m=(str[i]-'0')+(str[j]-'0');
                    ll t=fs-m;
                    if(t<=es)
                    {
                        ans=min(ans,2LL);
                    }
                }
            }
            else if(i>=3&&j>=3)
            {
                if(es>fs)
                {
                    m=(str[i]-'0')+(str[j]-'0');
                    ll t=es-m;
                    if(t<=fs)
                    {
                        ans=min(ans,2LL);
                    }
                }
                else
                {
                    ll t=es-(str[i]-'0')-(str[j]-'0');
                    if(t+18>=fs)
                    {
                    ans=min(ans,2LL);
                    }
                }

            }
            else
            {
                if(es>fs)
                {
                    ll t=es-(str[j]-'0');
                    ll d=fs-(str[i]-'0');
                    d+=9;
                    if(d>=t)
                    {
                        ans=min(ans,2LL);
                    }
                }
                else
                {
                    ll t=es-(str[j]-'0');
                    t+=9;
                    ll d=fs-(str[i]-'0');
                    if(t>=d)
                    {
                        ans=min(ans,2LL);
                    }
                }
            }
        }
    }
    cout<<ans<<"\n";
    //cout<<ans<<"\n";
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

