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
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        for(i=1;i<=n;i++)
        {
            cin>>aarray[i];
        }
        ll f1=0,f2=0,cur=aarray[1];
        ll Max=aarray[1];
        ll ans=0;
        aarray[n+1]=0;
        for(i=2;i<=n+1;i++)
        {
            if(aarray[i]>0&&cur>0)
            {
                Max=max(Max,aarray[i]);
            }
            else if(aarray[i]<0&&cur<0)
            {
                Max=max(aarray[i],Max);
            }
            else
            {
                ans+=Max;
                //cout<<Max<<endl;
                Max=aarray[i];
                cur=aarray[i];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}


