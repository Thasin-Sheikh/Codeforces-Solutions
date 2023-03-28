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
map<pair<ll,ll>,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>k;
    ll f=abs(n-k);
    if(f<=k)
    {
        cout<<-1<<"\n";
        return 0;
    }
    cout<<k*n<<"\n";
    ll p=2;
    //cout<<f<<endl;
    for(i=1; i<=n; i++)
    {
        ll c=0;
        for(j=1; j<=n; j++)
        {
            if(i!=j&&mp[ {i,j}]==0)
            {
                cout<<i<<" "<<j<<"\n";
                mp[{j,i}]++;
                c++;
            }
            if(c==k)
                break;
        }

    }
    return 0;
}





