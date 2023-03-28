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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    map<ll,ll>mp;
    sort(aarray+1,aarray+n+1);
    ll pre=INT_MAX;
    for(i=2;i<=n;i++)
    {
        k=abs(aarray[i]-aarray[i-1]);
        mp[k]++;
        if(k<pre)
            pre=k;
    //cout<<k<<endl;
   // cout<<aarray[i]<<" "<<aarray[i-1]<<endl;
    }
    cout<<pre<<" "<<mp[pre]<<endl;

    return 0;
}


