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
    ll i,j,n,m,k,t,a,a1,b,b1;
    cin>>t;
    while(t--)
    {
        ll p,f,s,w,cnts,cntw;
        cin>>p>>f;
        cin>>cnts>>cntw;
        cin>>s>>w;
        ll ans=0;
        if(s>w)
        {
            swap(s,w);
            swap(cnts,cntw);
        }
        for(i=0;i<=cnts;i++)
        {
            if(i*s>p)
                break;
            a=i;
            b=min((p-(a*s))/w,cntw);
            a1=min(f/s,cnts-a);
            b1=min((f-(a1*s))/w,cntw-b);
            ans=max(ans,a+b+a1+b1);
        }
        cout<<ans<<endl;
    }

    return 0;
}


