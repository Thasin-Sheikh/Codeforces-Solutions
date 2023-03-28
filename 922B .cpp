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
    ll i,j,n,m,k,t,a,b,c,ans=0;
    cin>>n;
    set<ll>sl;
    for(a=1; a<=n; a++)
    {
        for(b=a; b<=n; b++)
        {
            k=a^b;
            if(k<b||k>n)
                continue;
            if(a+b>k)
            {
                //cout<<a<<" "<<b<<" "<<k<<endl;
                ans++;
                //break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}


