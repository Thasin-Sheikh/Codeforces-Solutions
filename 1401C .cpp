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
void solve()
{
    ll i,j,n,Min=INT_MAX;
    cin>>n;
    vector<ll>v,v1;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
        Min=min(Min,aarray[i]);
    }
    sort(v.begin(),v.end());
    for(i=1;i<=n;i++)
    {
        if(aarray[i]%Min==0)
        {
            v1.push_back(aarray[i]);
            aarray[i]=0;
        }
    }
    sort(v1.begin(),v1.end());
    ll k=0;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]==0)
        {
            aarray[i]=v1[k];
            k++;
        }
    }
    vector<ll>ans;
    for(i=1;i<=n;i++)
    {
        ans.push_back(aarray[i]);
    }
    if(ans==v)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


