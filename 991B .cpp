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
    ll n,m,a,j,k,i,p,l=1,u=0,r=0,c=0,array[10000+10],d,ar[10000],sum=0;
    set<ll>ds;
    char ch;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
    sort(array,array+n);
    dl avg;
    avg=dl(sum)/n;
    if(avg>=4.5)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(array,array+n);
    for(i=0; i<n; i++)
    {
        sum=sum-array[i];
        sum+=5;
        c++;
        avg=dl(sum)/n;
        if(avg>=4.5)
        {
            cout<<c<<endl;
            return 0;
        }

    }

}
