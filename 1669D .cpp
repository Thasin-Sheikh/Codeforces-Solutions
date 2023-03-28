///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>str;
    if(n==1)
    {
        if(str[0]=='R'||str[0]=='B')
        {
            cout<<"NO"<<"\n";
        }
        else cout<<"YES"<<"\n";
        return ;
    }
    if(n==2)
    {
        if(str[0]!='W')
        {
            if(str[0]==str[1])
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
        if((str[0]=='W'||str[1]=='W')&&(str[0]!=str[1]))
        {
            cout<<"NO"<<"\n";
        }
        else cout<<"YES"<<"\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        sum=0;
        if(str[i]=='R'||str[i]=='B')
        {
            if(i-1>=0)
            {
                if(str[i-1]=='W')
                {
                    sum++;
                }
            }
            if(i+1<n)
            {
                if(str[i+1]=='W')
                {
                    sum++;
                }
            }
            if(sum==2)
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }

    }
    for(i=0; i<n; i++)
    {
        if(str[i]=='W')
        {
            v.push_back(i);
        }
    }
    r=b=0;
    if((ll)v.size()>0)
    {
        r=b=0;
        for(i=v[0]-1; i>=0; i--)
        {
            if(str[i]=='R')
                r++;
            else b++;
        }
        if((r>0&&b==0)||(b>0&&r==0))
        {
            cout<<"NO"<<"\n";
            return ;
        }
        r=b=0;
        for(i=v.back()+1; i<n; i++)
        {
            if(str[i]=='R')
            {
                r++;
            }
            else b++;
        }
        if((r>0&&b==0)||(b>0&&r==0))
        {
            cout<<"NO"<<"\n";
            return ;
        }
        if((ll)v.size()>1)
        {
            for(i=0; i<(ll)v.size()-1; i++)
            {
                a=v[i];
                ll bb=v[i+1];
                r=b=0;
              //  cout<<a<<" "<<bb<<endl;
                for(j=a+1; j<bb; j++)
                {
                    if(str[j]=='R')
                    {
                        r++;
                    }
                    else b++;
                }
                if((r>0&&b==0)||(b>0&&r==0))
                {
                    cout<<"NO"<<"\n";
                    return ;
                }

            }
        }
    }
    if(v.size()==0)
    {
        b=0,r=0;
        for(i=0; i<n; i++)
        {
            if(str[i]=='R')
            {
                r++;
            }
            else b++;
        }
        if((r>0&&b==0)||(b>0&&r==0))
        {
            cout<<"NO"<<"\n";
            return ;
        }

    }
    cout<<"YES"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract
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

