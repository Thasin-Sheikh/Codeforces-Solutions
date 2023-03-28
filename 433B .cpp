
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
ll insum[100000+10];
ll dcsum[100000+10];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,q,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    insum[0]=dcsum[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        insum[i]=insum[i-1]+aarray[i];
    }
    sort(aarray,aarray+n+1);
    for(i=1;i<=n;i++)
    {
        dcsum[i]=dcsum[i-1]+aarray[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<insum[c]-insum[b-1]<<endl;
        }
        else
        {
            cout<<dcsum[c]-dcsum[b-1]<<endl;
        }
    }

    return 0;
}
