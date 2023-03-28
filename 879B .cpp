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
    cin>>n>>k;
    for(i=1; i<=n; i++)
        cin>>aarray[i];
    ll ans;
    ans=*max_element(aarray,aarray+n+1);
    aarray[n+1]=INT_MAX;
    for(i=1; i<=n; i++)
    {
        ll c=0;
        if(aarray[i-1]<aarray[i]&&i!=1)
            c++;
        for(j=i+1; j<=n+1; j++)
        {
            if(aarray[j]<aarray[i])
            {
                c++;
            }
            else
            {
                if(c>=k)
                {
                    //cout<<c<<endl;
                    cout<<aarray[i]<<endl;
                    return 0;
                }
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


