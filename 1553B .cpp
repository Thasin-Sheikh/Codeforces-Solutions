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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str,s,t;
    bool yes=true;
    vector<ll>v;
    cin>>s>>t;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]==t[0])
        {
            v.push_back(i);
        }
    }
    while(v.size())
    {
        //cout<<1<<endl;
        k=v.back();
        v.pop_back();
        string ss;
        for(j=k;j<s.size();j++)
        {
            string pp;
            ss+=s[j];
            pp=ss;
            if(pp==t)
            {
                cout<<"YES"<<"\n";
                return ;
            }
            for(p=j-1;p>=0;p--)
            {
                pp+=s[p];
                if(pp==t)
                {
                    cout<<"YES"<<"\n";
                    return ;
                }
            }
        }
    }
    cout<<"NO"<<"\n";
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
