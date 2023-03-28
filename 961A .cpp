///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    makefast__
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,p,l=1,u=0,r=0,c=INT_MAX,array[10000+10],d,ar[10000],sum=0;
    set<ll>ds;
    char ch;
    ll count[100000];
    memset(count,0,sizeof(count));
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a;
        count[a]++;
    }
    for(i=1;i<=n;i++)
    {
        if(count[i]<c)
            c=count[i];
    }
    cout<<c<<endl;

}
