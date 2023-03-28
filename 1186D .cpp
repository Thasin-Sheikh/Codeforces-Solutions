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
    vector<ll>v,neg,pos;
    cin>>n;
    dl a[n+1];
    ll g=0,b=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        l=int(a[i]);
        if(l>0)
        {
            neg.push_back(l);
            g+=l;
        }
        else
        {
            pos.push_back(l);
            b+=l;
        }
    }
    if(abs(g)==abs(b))
    {
        for(i=1;i<=n;i++)
        {
            cout<<int(a[i])<<"\n";
        }
        return ;
    }
    //cout<<g<<" "<<b<<endl;
    if(abs(g)>abs(b))
    {
        ll ex=g-abs(b);
        for(i=1;i<=n;i++)
        {
            l=int(a[i]);
            if(a[i]<0)
            {
                if(ex)
                {
                    if(l!=a[i])
                    {
                        cout<<l-1<<"\n";
                        ex--;
                    }
                    else
                    {
                        cout<<l<<"\n";
                    }
                }
                else
                {
                    cout<<l<<"\n";
                }

            }
            else
            {
                cout<<l<<"\n";
            }
        }
    }
    else
    {
        ll ex=abs(b)-g;
        for(i=1;i<=n;i++)
        {
            l=int(a[i]);
            if(a[i]>0)
            {
                if(ex)
                {
                    if(l!=a[i])
                    {
                        cout<<l+1<<"\n";
                        ex--;
                    }
                    else
                    {
                        cout<<l<<"\n";
                    }
                }
                else
                {
                    cout<<l<<"\n";
                }

            }
            else
            {
                cout<<l<<"\n";
            }
        }
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


