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
bool prime[100001];
void seive()
{
    ll i,j,n;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2; i<=100010; i++)
    {
        if(prime[i])
        {
            for(j=2*i; j<=100010; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    seive();
    cin>>n;
    if(n<3)
        cout<<1<<endl;
    else
        cout<<2<<endl;
    for(i=2; i<=n+1; i++)
    {
        if(prime[i])
            cout<<1<<" ";
        else cout<<2<<" ";
    }
    cout<<endl;



    return 0;
}


