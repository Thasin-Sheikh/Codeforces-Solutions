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
ll sumarray[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>k;
    sumarray[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sumarray[i%k]+=aarray[i];
    }
    ll presum=INT_MAX,ans;
    for(i=0;i<k;i++)
    {
        if(sumarray[i]<presum)
        {
            presum=sumarray[i];
        }
    }
    ll in;
    ans=INT_MAX;
    for(i=0;i<k;i++)
    {
        if(sumarray[i]==presum)
        {
            if(i==0)
            {
                in=k;
            }
            else in=i;
            ans=min(ans,in);
        }
    }
    cout<<ans<<endl;
    return 0;
}


