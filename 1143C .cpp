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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
vector<ll>v[100000+10];
map<ll,ll>mp,mp2;
set<ll>ans;
ll parent[100000+10];
void  dfs(ll n)
{
    ll i,j,m,f=1;
    for(i=0;i<v[n].size();i++)
    {
        if(mp[v[n][i]]==0&&v[n][i]!=parent[n])
        {
            f=0;
            break;

        }
    }
    if(f)
    {
        ans.insert(n);
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a==-1)
            continue;
        v[a].push_back(i);
        v[i].push_back(a);
        mp[i]=b;
        parent[i]=a;
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]==1)
        {
            dfs(i);

        }
    }
    if(ans.size()==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(auto c:ans)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}



