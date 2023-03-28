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
map<char,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str,a,b,ans;
    bool yes=true;
    vector<char>v;
    cin>>n>>k;
    cin>>str;
    for(i=n-1;i>=0;i--)
    {
        mp[str[i]]++;
        v.push_back(str[i]);
    }
    ll mi=min(n,k);
    mi--;
    ll c=0;
    sort(v.begin(),v.end());
    if(n<k)
    {
        ans=str;
        while(ans.size()<k)
        {
            ans+=v[0];
        }
    }
    else
    {
        for(i=k-1;i>=0;i--)
        {
            if(str[i]!=v.back())
            {
                for(j=0;j<i;j++)
                {
                    ans+=str[j];
                }
                for(char ch ='a';ch<='z';ch++)
                {
                    if(mp[ch]&&ch>str[i])
                    {
                        ans+=ch;
                        break;
                    }
                }
                while(ans.size()<k)
                {
                    ans+=v[0];
                }
                break;
            }
        }
    }
    cout<<ans<<"\n";
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


