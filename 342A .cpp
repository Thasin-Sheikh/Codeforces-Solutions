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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    if(mp[5]||mp[7])
    {
        cout<<-1<<"\n";
        return 0;
    }
    ll a,c=0;
    vector<pair<pair<ll,ll>,ll>>ans;
    a=min(mp[1],min(mp[2],mp[4]));
    if(a>0)
    {
        mp[1]-=a,mp[2]-=a,mp[4]-=a;
        for(i=1; i<=a; i++)
        {

            ans.push_back({{1,2},4});
            c+=3;
        }
    }
    a=min(mp[1],min(mp[2],mp[6]));
    if(a>0)
    {
        mp[1]-=a,mp[2]-=a,mp[6]-=a;
        for(i=1; i<=a; i++)
        {

            ans.push_back({{1,2},6});
            c+=3;
        }
    }
    a=min(mp[1],min(mp[3],mp[6]));
    if(a>0)
    {
        mp[1]-=a,mp[3]-=a,mp[6]-=a;
        for(i=1; i<=a; i++)
        {

            ans.push_back({{1,3},6});
            c+=3;

        }
    }
    if(c!=n)
    {
        cout<<-1<<"\n";
        return 0;
    }
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second<<'\n';
    }

    return 0;
}

