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
map<ll,ll>mp;
vector<ll>v;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,x,y,t;
    cin>>n>>x>>y;
    for(i=1;i<=n-1;i++)
    {
        v.push_back(1LL);
    }
    k=n-1;
    for(i=1;;i++)
    {
        if(i*i+k>=x)
        {
            v.push_back(i);
            k+=i;
            break;
        }
    }
    if(k>y)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(auto c:v)
    {
        cout<<c<<" ";
    }
    cout<<endl;

    return 0;
}




