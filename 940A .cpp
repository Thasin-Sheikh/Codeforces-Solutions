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
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=INT_MAX,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    set<ll>sl;
    ll cnt[10000];
    ll dia;
    cin>>n>>dia;
    memset(cnt,0,sizeof(cnt));
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sl.insert(aarray[i]);
        cnt[aarray[i]]++;
    }
    if(sl.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(aarray,aarray+n+1);
    for(i=1; i<n; i++)
    {
        A=0;
        for(j=i+1; j<=n; j++)
        {
            if(aarray[j]-aarray[i]<=dia)
            {
                A++;
            }
            else break;
        }
        A++;
        ll dis=n-A;
        ans=min(ans,dis);
    }
    cout<<ans<<endl;
    //for(i=1;i<=n;i++)
      //  cout<<aarray[i]<<" ";

    return 0;
}


