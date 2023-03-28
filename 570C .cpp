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
    cin>>n>>m;
    cin>>str;
    ll pos;
    char ch;
    str+='a';
    ll tot=0,dot=0;
    for(i=0; i<=n; i++)
    {
        if(str[i]=='.')
        {
            dot++;
        }
        else if(dot)
        {
            tot+=dot-1;
            dot=0;
        }
    }
    str.pop_back();
   // cout<<tot<<endl;
    while(m--)
    {
        cin>>pos>>ch;
        pos--;
        if(ch=='.'&&str[pos]!='.')
        {
            str[pos]='.';
            if(pos==0)
            {
                if(pos+1<n)
                {
                    if(str[pos+1]=='.')
                    {
                        tot++;
                    }
                }
            }
            else
            {
                if(pos-1>=0&&pos+1<n)
                {
                    if(str[pos-1]=='.'&&str[pos+1]=='.')
                    {
                        tot+=2;
                    }
                    else if(pos-1>=0&&str[pos-1]=='.')
                    {
                        tot++;
                    }
                    else if(pos+1<n&&str[pos+1]=='.')
                    {
                        tot++;
                    }
                }
                else
                {
                    if(pos-1>=0)
                    {
                        if(str[pos-1]=='.')
                        {
                            tot++;
                        }
                    }
                    if(pos+1<n)
                    {
                        if(str[pos+1]=='.')
                        {
                            tot++;
                        }
                    }
                }
            }
        }
        else if(ch!='.'&&str[pos]=='.')
        {
            str[pos]=ch;
            if(pos==0)
            {
                if(pos+1<n)
                {
                    if(str[pos+1]=='.')
                    {
                        tot--;
                    }
                }
            }
            else
            {
                if(pos-1>=0&&pos+1<n)
                {
                    if(str[pos-1]=='.'&&str[pos+1]=='.')
                    {
                        tot-=2;
                    }
                    else if(pos-1>=0&&str[pos-1]=='.')
                    {
                        tot--;
                    }
                    else if(pos+1<n&&str[pos+1]=='.')
                    {
                        tot--;
                    }
                }
                else
                {
                    if(pos-1>=0)
                    {
                        if(str[pos-1]=='.')
                        {
                            tot--;
                        }
                    }
                    if(pos+1<n)
                    {
                        if(str[pos+1]=='.')
                        {
                            tot--;
                        }
                    }
                }
            }
        }
        cout<<tot<<"\n";
    }
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

