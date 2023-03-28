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
const int N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<string,ll>mp;
map<string,ll>pp;
map<string,ll>ho,in;
map<string,vector<string>>v,ans;
ll ok(string a,string b)
{
    string c,d;
    c=a;
    reverse(c.begin(),c.end());
    ll cn=0;
    for(ll i=0; i<v[b].size(); i++)
    {
        if(v[b][i]==a&&cn==0)
        {
            cn++;
            continue;
        }
        if(v[b][i]=="#")
            continue;
        d=v[b][i];
        reverse(d.begin(),d.end());
        if(d.substr(0,c.length())==c)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str[100],s,ss;
    ll i,j,n,m,k,t=0,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
        cin>>m;
        while(m--)
        {
            cin>>s;
            v[str[i]].push_back(s);
        }
    }
    for(i=1; i<=n; i++)
    {
        if(mp[str[i]]!=0)
            continue;
        mp[str[i]]++;
        t++;
        for(j=0; j<v[str[i]].size(); j++)
        {
            ss=v[str[i]][j];
            if(ok(ss,str[i]))
            {
                v[str[i]][j]="#";
            }
        }
    }
    mp.clear();
    for(i=1; i<=n; i++)
    {
        if(mp[str[i]]!=0)
            continue;
        mp[str[i]]++;

        for(j=0; j<v[str[i]].size(); j++)
        {
            if(v[str[i]][j]!="#")
            {
                ans[str[i]].push_back(v[str[i]][j]);
            }
        }
    }
    cout<<t<<endl;
    mp.clear();
    for(i=1; i<=n; i++)
    {
        if(mp[str[i]]!=0)
            continue;
        mp[str[i]]++;
        cout<<str[i]<<" "<<ans[str[i]].size()<<" ";
        for(j=0;j<ans[str[i]].size();j++)
        {
            cout<<ans[str[i]][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}




