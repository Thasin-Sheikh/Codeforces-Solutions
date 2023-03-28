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
bool prime[10000000+10];
void create()
{
    ll i,j,n,m;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2;i<=10000000;i++)
    {
        if(prime[i])
        {
            primes.push_back(i);
            for(j=2*i;j<=10000000;j+=i)
                prime[j]=false;
        }

    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,n;
    create();
    cin>>n;
    for(i=0;i<n;i++)
        cout<<primes[i]<<" ";

    return 0;
}


