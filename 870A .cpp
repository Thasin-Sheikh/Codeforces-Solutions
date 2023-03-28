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
    set<ll>ds,intg;
    char ch;
    ll count[100000];
    memset(count,0,sizeof(count));
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(i=0; i<m; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(array[j]==ar[i])
            {
                cout<<array[j]<<endl;
                return 0;
            }
        }
    }

    k=min(array[0],ar[0]);
    p=max(array[0],ar[0]);
    cout<<k<<p<<endl;
}
