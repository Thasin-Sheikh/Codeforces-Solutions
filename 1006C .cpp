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
    ll i,j,n,m,k;
    cin>>n;
    ll sum=0;
    multiset<ll>sl;
    map<ll,ll>mp;
    vector<ll>v;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ll s1=0,s2=0,ans=0;
    ll r,l;
    for(l=1,r=n;l<=r;)
    {
        if(s1<=s2)
        {
            s1+=aarray[l];
            l++;
        }
        else if(s1>s2)
        {
            s2+=aarray[r];
            r--;
        }
        if(s1==s2)
        {
            ans=max(ans,s1);
        }
    }
    cout<<ans<<endl;

}
