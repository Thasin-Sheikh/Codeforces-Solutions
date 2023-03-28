
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
ll ans[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1; i<=n/2; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n/2; i++)
    {
        if(i==1)
        {
            ans[1]=0;
            ans[n]=aarray[i];
        }
        else
        {
            ll n1,n2;
            n1=ans[i-1];
            n2=aarray[i]-n1;
            if(n2<=ans[n-i+2])
            {
                ans[i]=n1;
                ans[n-i+1]=n2;
            }
            else
            {
                ll p=abs(ans[n-i+2]-aarray[i]);
                ans[i]=p;
                ans[n-i+1]=aarray[i]-p;
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}

