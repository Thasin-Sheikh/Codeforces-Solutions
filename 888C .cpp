///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
vector<ll>v[100000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    set<char>ss;
    ll cnt[26]= {0};
    for(i=0; i<=26; i++)
    {
        v[i].push_back(-1);
    }
    for(i=0; i<str.length(); i++)
    {
        ss.insert (str[i]);
        k=str[i]-'a';
        cnt[k]++;
        v[k].push_back(i+1);
    }
    for(i=0; i<=26; i++)
    {
        v[i].push_back(ll(str.size()));
    }
    if(ss.size()==1)
    {
        cout<<1<<endl;
        return 0;
    }
    ll ans=str.size(),fl,p;
    for(i=0; i<26; i++)
    {
        p=0;
        for(j=0; j<v[i].size()-1; j++)
        {
            ll df=v[i][j+1]-v[i][j];
            p=max(p,df);
        }
        ans=min(ans,p);
    }
    cout<<ans<<endl;
    return 0;
}


