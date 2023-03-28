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
ll cnts[30];
vector<pair<ll,ll>>ans;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string s,t;
    bool yes=true;
    cin>>n;
    cin>>s>>t;
    ans.clear();
    for(i=0; i<26; i++)
    {
        cnts[i]=0;
    }
    for(i=0; i<n; i++)
    {
        cnts[s[i]-'a']++;
        cnts[t[i]-'a']++;
    }
    for(i=0; i<26; i++)
    {
        if(cnts[i]%2)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            ll f=0;
            for(j=i+1;j<n;j++)
            {
                if(s[j]==s[i]&&s[j]!=t[j])
                {
                    ans.push_back({j+1,i+1});
                    swap(s[j],t[i]);
                    f++;
                    break;
                }
            }
            if(!f)
            {
                for(j=i+1;j<n;j++)
                {
                    if(s[i]==t[j])
                    {
                        ans.push_back({j+1,j+1});
                        swap(t[j],s[j]);
                        ans.push_back({j+1,i+1});
                        swap(s[j],t[i]);
                        break;
                    }
                }
            }
        }
    }
    cout<<"YES"<<"\n";
    cout<<ans.size()<<"\n";
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
