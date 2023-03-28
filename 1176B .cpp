/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    ll n,m,a,b[3],array[100000+10],t,i,j,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        memset(b,0,sizeof(b));
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
             b[a%3]++;

        }
        sum=b[0];
        ll p=min(b[1],b[2]);
        b[1]=b[1]-p;
        b[2]=b[2]-p;
        sum+=p;
        sum=sum+((b[1]+b[2])/3);
        cout<<sum<<endl;
    }
}
