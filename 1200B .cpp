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
void solve()
{
    ll i,j,n,m,ache,h;
    cin>>n>>ache>>h;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ll k;
    for(i=2;i<=n;i++)
    {
        k=max(0LL,aarray[i]-h);
        if(aarray[i-1]>k)
            ache+=aarray[i-1]-k;
        else
        {
            if(aarray[i-1]+ache<k)
            {
                cout<<"NO"<<endl;
                return;
            }
            ache-=k-aarray[i-1];
        }
    }
    cout<<"YES"<<endl;
}
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
        solve();
    }

    return 0;
}


