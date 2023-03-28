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
pair<ll,ll>pp[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<pair<ll,ll>>v;
    queue<ll>qu;
    cin>>n>>d;
    ll fsum=0;
    for(i=1;i<=n;i++)
    {
        cin>>pp[i].first>>pp[i].second;

    }
    sort(pp,pp+n+1);
    for(i=1,j=1;i<=n;i++)
    {
        A+=pp[i].second;
        while(pp[i].first-pp[j].first>=d)
        {
            A-=pp[j].second;
            j++;
        }
        ans=max(ans,A);
    }
    cout<<ans<<endl;





    return 0;
}


