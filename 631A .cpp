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
    string ptr,ps[1001],s[1001];
    ll n,m,a,j,k=0,i,b=0,p,bowl,plate,ans=0,extra=0,array[10000+10],d,ar[10000],sum=0,a1=0,a2=0;
    set<ll>ds,intg;
    char ch[100][100],ch1,ch2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        k|=array[i];
    }
    for(j=0; j<n; j++)
    {
        cin>>ar[j];
        b|=ar[j];
    }
    cout<<k+b<<endl;

}
