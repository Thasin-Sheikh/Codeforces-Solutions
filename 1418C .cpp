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
bool ok[1000001];
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
        ll ans=0;
        memset(aarray,0,sizeof(aarray));
        for(i=1; i<=n; i++)
            cin>>aarray[i];
        if(aarray[1]==1)
        {
            ans++;
        }
        for(i=2; i<=n; i++)
        {
            if(aarray[i]&&aarray[i+1]&&aarray[i+2])
            {
                ans++;
                i+=2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

