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
map<string,ll>mp;
string str[70000+100];
string ans;
ll bs(ll in,ll bo)
{
    ll i,j,k;
    string s;
    for(i=0; i<bo; i++)
    {
        s+=str[in][i];
    }
    if(mp[s]==0)
    {
        ans=s;
        return true;
    }
    for(i=bo; i<9; i++)
    {
        string ss;
        ss=s.substr(1,bo-1);
        ss+=str[in][i];
        s=ss;
        if(mp[s]==0)
        {
            ans=s;
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
        mp[str[i]]++;
        for(j=1; j<=8; j++)
        {
            string s;
            for(k=0; k<j; k++)
            {
                s+=str[i][k];
            }
            //cout<<s<<endl;
            mp[s]++;
            for(k=j; k<9; k++)
            {
                if(j!=1)
                {
                    string ss=s.substr(1,j-1);
                    ss+=str[i][k];
                    s=ss;
                    //cout<<s<<endl;
                    mp[s]++;
                }
                else
                {
                    string ss;
                    ss+=str[i][k];
                    //cout<<ss<<endl;
                    mp[ss]++;
                }
               // cout<<s<<endl;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        l=1,r=9;
        for(j=1; j<=8; j++)
        {
            string s;
            for(k=0; k<j; k++)
            {
                s+=str[i][k];
            }
            mp[s]--;
            for(k=j; k<9; k++)
            {
                if(j!=1){
                string ss=s.substr(1,j-1);
                ss+=str[i][k];
                s=ss;
                mp[s]--;}
                else
                {
                    string ss;
                    ss+=str[i][k];
                    mp[ss]--;
                }
            }
        }
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(bs(i,mid))
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        for(j=1; j<=8; j++)
        {
            string s;
            for(k=0; k<j; k++)
            {
                s+=str[i][k];
            }
            mp[s]++;
            for(k=j; k<9; k++)
            {
                if(j!=1){
                string ss=s.substr(1,j-1);
                ss+=str[i][k];
                s=ss;
                mp[s]++;}
                else
                {
                    string ss;
                    ss+=str[i][k];
                    mp[ss]++;
                }
            }
        }
        cout<<ans<<"\n";
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
