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
map<char,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str,s,t;
    bool yes=true;
    vector<ll>v;
    cin>>s>>t;
    ll ct[30]= {0},cs[30]= {0};
    ll l1,l2;
    l1=s.size();
    l2=t.size();
    for(i=0; i<l1; i++)
    {
        if(s[i]=='?')
        {
            v.push_back(i);
        }
        cs[s[i]-'a']++;
    }
    for(i=0;i<l1;i++)
    {
        l=i%l2;
        if(cs[t[l]-'a'])
        {
            cs[t[l]-'a']--;
        }
        else
        {
            if(v.size()>0)
            {
                s[v.back()]=t[l];
                //cout<<s<<endl;
                v.pop_back();
            }
            else break;
        }
    }
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

