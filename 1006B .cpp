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
    vector<ll>v,put,take;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
    }
    take=v;
    sort(v.rbegin(),v.rend());
    ll sum=0;
    for(i=0; i<k; i++)
    {
        put.push_back(v[i]);
        sum+=v[i];
    }
    reverse(put.begin(),put.end());
    vector<ll>ans;
    for(i=0; i<put.size(); i++)
    {
        for(j=1; j<=n; j++)
        {
            if(aarray[j]==put[i])
            {
                ans.push_back(j);
                aarray[j]=0;
                break;

            }
        }
    }
    ll a=0;
    sort(ans.begin(),ans.end());
    ll ses;
    ses=ans.back();
    if(ses<n)
    {
        ans.back()=n;
    }
    cout<<sum<<endl;
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]-a<<" ";
        a=ans[i];
    }
    cout<<endl;


    return 0;
}


