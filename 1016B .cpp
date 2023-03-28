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
ll pp[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,s;
    ll i,j,n,m,k,t,q;
    cin>>n>>m>>q;
    cin>>str>>s;
    for(i=0;i+m<=n;i++)
    {
        if(str.substr(i,m)==s)
        {
            pp[i+1]++;
        }
    }
    for(i=2;i<=n;i++)
        pp[i]+=pp[i-1];
    while(q--)
    {
        ll l,r,ans;
        cin>>l>>r;
        r=r-m+1;
        ans=max(0LL,pp[max(0LL,r)]-pp[l-1]);
        cout<<ans<<endl;
    }
    return 0;
}


