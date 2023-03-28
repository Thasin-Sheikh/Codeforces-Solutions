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
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll a[100000+10],b[100000+10],l[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,sto;
    cin>>n>>m>>sto;
    for(i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i]>>l[i];
    }
    set<ll>sl;
    for(i=1;i<=sto;i++)
    {
        ll aa;
        cin>>aa;
        sl.insert(aa);
    }
    ll ans=INT_MAX;
    for(i=1;i<=m;i++)
    {
        ll n1,n2,len;
        n1=a[i],n2=b[i],len=l[i];
        if((sl.find(n1)!=sl.end()&&sl.find(n2)==sl.end())||(sl.find(n1)==sl.end()&&sl.find(n2)!=sl.end()))
        {
             ans=min(ans,len);

        }
    }
    if(ans==INT_MAX)
        cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}


