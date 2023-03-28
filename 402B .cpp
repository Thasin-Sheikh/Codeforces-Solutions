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
    ll i,j,n,m,k,t,target=1,pre=INT_MAX,aa;
    vector<pair<char,pair<ll,ll>>>ans;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=1000; i++)
    {
        k=i;
        vector<pair<char,pair<ll,ll>>>v;
        for(j=1; j<=n; j++)
        {
            ll p=k+(j-1)*m;
            if(aarray[j]<p)
            {
                v.push_back({'+',{j,p-aarray[j]}});

            }
            else if(aarray[j]>p)
            {
                v.push_back({'-',{j,abs(p-aarray[j])}});
            }
        }
        if(v.size()<pre)
        {
            pre=v.size();
            ans=v;
            aa=k;
        }
    }
    cout<<ans.size()<<"\n";
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";
    }
    return 0;
}




