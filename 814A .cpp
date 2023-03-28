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
    ll n,m,a,j,k,i,p,l=1,u=0,r=0,c,array[10000+10],d,ar[10000];
    set<ll>ds;
    char ch;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    if(m>=2){
        cout<<"YES"<<endl;
        return 0;}
    if(m==1)
    {
        for(i=0;i<n;i++)
        {
            if(array[i]==0)
                array[i]=ar[0];
        }
        for(i=1;i<n;i++)
        {
            if(array[i]<array[i-1])
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
