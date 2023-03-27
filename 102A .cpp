///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];
ll lcm(ll n,ll m)
{
    return (n*m)/(__gcd(n,m));
}
ll ccount[1000001];
int main()
{
    makefast__
    string str[100001];
    ll a,c,d,e,f,x,y,t,A=0,B,L,j,i,l,r,n,C=0,sum=0,sum1=0,m,k,b;
    vector<pair<ll,ll>>v;
    ll m1[101];
    ll m2[102];
    ll count[10001];
    ll ans=INT_MAX;
    cin>>n>>m;
    set<ll>sl[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    if(m<=1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        sl[a].insert(b);
        sl[b].insert(a);

    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            for(k=j+1; k<=n; k++)
            {
                if(sl[i].count(j)&&sl[i].count(k)&&sl[j].count(k))
                    ans=min(ans,aarray[i]+aarray[j]+aarray[k]);


            }
        }
    }
    if(ans==INT_MAX)
        cout<<-1<<endl;
    else cout<<ans<<endl;



}
