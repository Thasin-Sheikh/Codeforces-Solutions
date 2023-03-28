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
ll up[200000+10];
ll bal[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,q,t,l,r;
    cin>>n>>k>>q;
    ll mi=INT_MAX,ma=INT_MIN;
    for(i=1;i<=n;i++)
    {
        cin>>l>>r;
        mi=min(mi,l);
        ma=max(ma,r);
        up[l]++;
        up[r+1]--;
    }
    for(i=1;i<=200001;i++)
    {
        up[i]+=up[i-1];
    }
    for(i=1;i<=200001;i++)
    {
        if(up[i]>=k)
        {
            bal[i]=1;
        }
        else bal[i]=0;
    }
    for(i=1;i<=200001;i++)
    {
        bal[i]+=bal[i-1];
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<bal[r]-bal[l-1]<<endl;
    }
    return 0;
}


