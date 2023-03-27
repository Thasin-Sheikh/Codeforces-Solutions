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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=INT_MAX,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    //1 6 9 13 15 16 18 24 39 47
    for(i=0;i<v.size();i++)
    {
        x=upper_bound(v.begin(),v.end(),v[i]*2)-v.begin();
        y=i+n-x;
        //cout<<y<<" ";
        ans=min(ans,y);
    }
   cout<<ans<<endl;


    return 0;
}


