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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll cnt[30];
string ans,str;
ll bs(ll n,ll k)
{
    ll j,i;
    for(i=0; i<26; i++)
    {
        if(cnt[i]==0)
            continue;
        if(cnt[i]<=n)
        {
            if(k)
            {
                ans+=char(i+97);
                k--;
            }
            else
            {
                //cout<<i<<endl;
                return false;
            }
        }
        else
        {
            ll d=cnt[i]/n;
            if(cnt[i]%n)
            {
                d++;
            }
            if(k<d)
            {
                //cout<<i<<endl;
                return false;
            }
            else
            {
                for(ll in=0; in<d; in++)
                {
                    ans+=char(i+97);
                }
                k-=d;
            }
        }
    }
    if(k)
    {
        for(i=1;i<=k;i++)
        {
            ans+=str[0];
        }
    }
    return true;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    ll i,j,n,m,k,t;
    cin>>str;
    cin>>k;
    set<char>sc;
    for(i=0; i<str.length(); i++)
    {
        sc.insert(str[i]);
        cnt[str[i]-'a']++;
    }
    if(str.length()<=k)
    {
        cout<<1<<"\n";
        cout<<str;
        n=str.length();
        for(i=n+1;i<=k;i++)
        {
            cout<<str[0];
        }
        cout<<"\n";
        return 0;
    }
    if(sc.size()>k)
    {
        cout<<-1<<"\n";
        return 0;
    }
    for(i=2; i<=1000; i++)
    {
        ans.clear();
        if(bs(i,k))
        {
            cout<<i<<"\n";
            cout<<ans<<"\n";
            return 0;
        }
    }
    return 0;
}




