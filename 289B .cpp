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
ll magic[111][111];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,d,t;
    cin>>n>>m>>d;
    ll f1=1,f2=1;
    set<ll>sl,num;
    vector<ll>v;
    ll mi=INT_MAX,ma=INT_MIN;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
            num.insert(magic[i][j]);
            sl.insert(magic[i][j]%d);
            v.push_back(magic[i][j]);
        }
    }
    if(sl.size()>1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(num.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    ll banabo=v[ll(v.size())/2];
    //cout<<banabo<<endl;
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            ll df=abs(banabo-magic[i][j]);
            ans+=(df)/d;
        }
    }
    cout<<ans<<endl;
    return 0;
}


