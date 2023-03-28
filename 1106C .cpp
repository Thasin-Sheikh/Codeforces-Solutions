/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll n,m,i,j,ans,array[300010],ma,t,two=2,minn=INT_MIN;
    ll count[10000];
    string str;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>array[i];
    sort(array,array+n);
    j=n-1;
    for(i=0; i<n/2; i++)
    {
        array[i]=array[i]+array[j];
        j--;
    }
    ll sum=0;
    for(i=0;i<n/2;i++)
    {
        sum=sum+(array[i]*array[i]);
    }
    cout<<sum<<endl;

}
