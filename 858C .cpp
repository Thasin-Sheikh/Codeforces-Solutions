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
    string str,b;
    bool yes=true;
    vector<string>v;
    cin>>str;
    n=str.size();
    mp['a']++;
    mp['e']++;
    mp['i']++;
    mp['o']++;
    mp['u']++;
    for(i=0;i<n;i++)
    {
        if(i+2>n-1)
        {
            b+=str[i];
            if(i+1<n)
            b+=str[i+1];
            v.push_back(b);
            break;
        }
        else
        {
            set<char>sc;
            sc.insert(str[i]);
            sc.insert(str[i+1]);
            sc.insert(str[i+2]);
            if(mp[str[i]]||mp[str[i+1]]||mp[str[i+2]])
            {
                b+=str[i];
                continue;
            }
            if(sc.size()==1)
            {
                b+=str[i];
            }
            else
            {
                b+=str[i];
                b+=str[i+1];
                v.push_back(b);
                b.clear();
                i++;
            }
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
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

