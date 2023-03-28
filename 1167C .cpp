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
ll aarray[5000000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
ll parent[5000000+10];
ll ffind(ll a)
{
    if(a!=parent[a])
    {
        parent[a]=ffind(parent[a]);
    }
    return parent[a];
}
void mmerge(ll a,ll b)
{
    a=ffind(a);
    b=ffind(b);
    parent[a]=b;


}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>k;
    for(i=1; i<=n+1; i++)
        parent[i]=i;
    for(i=1; i<=k; i++)
    {
        cin>>t;
        ll p=-1;
        while(t--)
        {
            cin>>a;
            if(p==-1)
            {
                p=a;
            }
            mmerge(a,p);
        }
    }
    for(i=1;i<=n;i++)
    {
        aarray[ffind(i)]++;
    }
    for(i=1;i<=n;i++)
        cout<<aarray[ffind(i)]<<" ";
    cout<<endl;
    return 0;
}


