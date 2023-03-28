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
    cin>>n;
    cin>>str;
    string ptr;
    ptr=str;
    while(1)
    {
        char c='0';
        for(i=0; i<str.size(); i++)
        {
            if(i==0)
            {
                if(i+1<str.size())
                {
                    l=str[i+1]-'0';
                    r=str[i]-'0';
                    if(l+1==r)
                    {
                        c=max(c,str[i]);
                    }
                }
            }
            else if(i==str.size()-1)
            {
                if(i-1>=0)
                {
                    l=str[i-1]-'0';
                    r=str[i]-'0';
                    if(l+1==r)
                    {
                        c=max(c,str[i]);
                    }
                }

            }
            else
            {

                l=str[i-1]-'0';
                r=str[i]-'0';
                p=str[i+1]-'0';
                if(l+1==r||p+1==r)
                {
                    c=max(c,str[i]);
                }
            }
        }
        if(c=='0')
        {
            break;
        }
        else
        {
            for(i=0; i<str.size(); i++)
            {
                if(i==0)
                {
                    if(i+1<str.size())
                    {
                        l=str[i+1]-'0';
                        r=str[i]-'0';
                        if(l+1==r&&str[i]==c)
                        {
                            str[i]='A';
                            break;

                        }
                    }
                }
                else if(i==str.size()-1)
                {
                    if(i-1>=0)
                    {
                        l=str[i-1]-'0';
                        r=str[i]-'0';
                        if(l+1==r&&str[i]==c)
                        {
                            str[i]='A';
                            break;

                        }
                    }

                }
                else
                {

                    l=str[i-1]-'0';
                    r=str[i]-'0';
                    p=str[i+1]-'0';
                    if((l+1==r||p+1==r)&&str[i]==c)
                    {
                        str[i]='A';
                        break;

                    }
                }
            }
        }
        string ss;
        for(i=0;i<str.size();i++)
        {
            if(str[i]!='A')
            {
                ss+=str[i];
            }
        }
        str=ss;
        //cout<<1<<endl;
    }
    ans=n-(ll)str.size();
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

