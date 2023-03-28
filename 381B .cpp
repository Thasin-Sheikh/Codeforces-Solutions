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
    vector<ll>a,v,ans;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(mp[aarray[i]]==1)
        {
            a.push_back(aarray[i]);
        }
        else if(mp[aarray[i]]==2)
        {
            v.push_back(aarray[i]);
        }
    }
    sort(a.begin(),a.end());
    sort(v.rbegin(),v.rend());
    if(v.size()>0){
    if(v[0]==a[a.size()-1])
    {
        for(i=1; i<v.size(); i++)
        {
            a.push_back(v[i]);
        }
    }
    else
    {
        for(i=0; i<v.size(); i++)
        {
            a.push_back(v[i]);
        }
    }
    }
    cout<<a.size()<<'\n';
    for(i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<'\n';


    return 0;
}

