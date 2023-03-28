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
    string a,b,c,d;
    ll i,j,n,m,k,t;
    cin>>a>>b;
    vector<pair<string,string>>v;
    v.push_back({a,b});
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>c>>d;
        if(a==c)
        {
           v.push_back({d,b});
           a=d,b=b;
        }
        else
        {
            v.push_back({a,d});
            a=a,b=d;
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}
