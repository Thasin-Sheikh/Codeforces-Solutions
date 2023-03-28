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
    ll i,j,k,m,n,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    ll r=0,u=0,rr=0,uu=0;
    for(i=0; i<n; i++)
    {
        if(str[i]=='R')
            r++;
        else if(str[i]=='L')
        {
            r--;
        }
        else if(str[i]=='U')
        {
            u++;
        }
        else u--;
        uu=0,rr=0;
        for(j=0; j<n; j++)
        {
            if(str[j]=='R')
                rr++;
            else if(str[j]=='L')
            {
                rr--;
            }
            else if(str[j]=='U')
            {
                uu++;
            }
            else uu--;
            if(r==rr&&u==uu)
            {
                if(str[j]=='R')
                    rr--;
                else if(str[j]=='L')
                {
                    rr++;
                }
                else if(str[j]=='U')
                {
                    uu--;
                }
                else uu++;

            }
        }
        if(rr==0&&uu==0)
        {
            cout<<r<<" "<<u<<"\n";
            return ;
        }

    }
    cout<<0<<" "<<0<<"\n";
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
        solve();
    }
    return 0;
}
