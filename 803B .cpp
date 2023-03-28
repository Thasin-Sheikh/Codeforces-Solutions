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
ll suf[200000+10],pre[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    suf[0]=INT_MAX,pre[n+1]=INT_MAX;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]==0)
        {
            suf[i]=0;
        }
        else
            suf[i]=suf[i-1]+1;
    }
    for(i=n;i>=1;i--)
    {
        if(aarray[i]==0)
        {
            pre[i]=0;
        }
        else pre[i]=pre[i+1]+1;
    }
    for(i=1;i<=n;i++)
    {
        cout<<min(pre[i],suf[i])<<endl;
    }

    return 0;
}


