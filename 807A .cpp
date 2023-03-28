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
    makefast__
    string str,ptr;
    ll n,m,t,f=0,c[1001],a[1001],b[1001],k,i,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i];
    }
    for(i=0; i<n; i++)
    {

        if(a[i]!=b[i])
        {
            cout<<"rated";
            return 0;
        }

    }
    sort(c,c+n);
    for(i=n-1,k=0; i>=0; i--,k++)
    {
        if(a[k]==c[i])
        {

        }
        else
        {
            cout<<"unrated"<<endl;
            return 0;
        }
    }
    cout<<"maybe"<<endl;



}
