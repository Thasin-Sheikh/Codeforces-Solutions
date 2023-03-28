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
ll aarray[1001][1001];
char magic[101][101];
vector<ll>primes;
bool fk[1000001];
ll ccount[2000001];
ll fact(ll n)
{
    int i,j;
    ll fct=1;
    for(i=1; i<=n; i++)
    {
        fct*=i;
    }
    return fct;

}
int main()
{
    makefast__
    string str,ptr;
    ll a,c,d,e,f,x,y,t,A,B,L,j,i,l,r,m,n,C,D,sum=0,sum1=0;
    vector<ll>v,v1,ans,bali;
    queue<ll>qu;
    set<ll>sl;
    map<string,int>ms;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>aarray[i][j];
        }
    }
    x=aarray[1][2]*aarray[1][3]/aarray[2][3];
    x=sqrt(x);
    cout<<x<<" ";
    for(i=2;i<=n;i++)
        cout<<aarray[i][1]/x<<" ";



    return 0;
}
