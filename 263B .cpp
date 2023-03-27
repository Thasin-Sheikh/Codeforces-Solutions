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
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,p=0,l=1,u=0,r=0,c=0,array[1000],d,flag,b;
    set<ll>ds;
    vector<ll>vint;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    k=n-m;
    if(m>n)
        cout<<-1<<endl;
    else
    cout<<array[k]<<" "<<array[k]<<endl;

}
