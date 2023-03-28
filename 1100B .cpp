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
ll cnt[100000+10];
ll dis=0;
ll les(ll n)
{
    ll i;
    for(i=1;i<=n;i++)
    {
        cnt[i]--;
        if(cnt[i]==0)
            dis--;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>aarray[i];
        cnt[aarray[i]]++;
        if(cnt[aarray[i]]==1)
        {
            dis++;
        }
        if(dis==n)
        {
            les(n);
            str+='1';
        }
        else
            str+='0';
    }
    cout<<str<<endl;
    return 0;
}


