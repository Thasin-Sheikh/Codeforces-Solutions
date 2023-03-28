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

int main()
{
    makefast__
    string str;
    ll a,c,d,e,f,x,m,y,t,A=0,B=0,L,j,i,l,r,n,C=0,ans=0,sum,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n+1);
    for(i=1; i<=m; i++)
        A+=aarray[i];
    cout<<A<<endl;



}
