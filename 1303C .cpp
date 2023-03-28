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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<char,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str,s;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    s+=str[0];
    mp[str[0]]++;
    for(i=1;i<n;i++)
    {
        if(mp[str[i]])
            continue;
        char ch=s.back();
        if(str[i-1]==ch)
        {
            s+=str[i];
            mp[str[i]]++;
        }
        else
        {
            s=str[i]+s;
            mp[str[i]]++;
        }
    }
    ll cnt[30];
    for(i=0;i<s.size();i++)
    {
        cnt[s[i]-'a']=i;
    }
    //cout<<s<<endl;
    for(i=1;i<n;i++)
    {
        l=cnt[str[i-1]-'a'];
        //cout<<i<<" "<<l<<endl;
        if(l+1!=cnt[str[i]-'a']&&l-1!=cnt[str[i]-'a'])
        {
            cout<<"NO"<<"\n";
            return ;

        }
    }
    map<char,ll>sc;
    for(i=0;i<s.size();i++)
    {
        sc[s[i]]++;

    }
    for(char c='a';c<='z';c++)
    {
        if(mp[c]==0)
        {
            s+=c;
        }
    }
    cout<<"YES"<<"\n";
    cout<<s<<"\n";
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


