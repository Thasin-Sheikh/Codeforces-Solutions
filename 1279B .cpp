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
    ll i,j,n,m,k,t,tot;
    cin>>t;
    while(t--)
    {
        cin>>n>>tot;
        ll sum=0;
        vector<ll>v;
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
            sum+=aarray[i];
        }
        if(sum<=tot)
        {
            cout<<0<<endl;
            continue;
        }
        ll ans=0,p=0,num,l=0;
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=aarray[i];
            if(p<aarray[i])
            {
                p=aarray[i];
                l=i;
            }
            if(sum<=tot)
            {
                ans=0;
            }
            else if(sum-p<=tot)
            {
                ans=l;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}


