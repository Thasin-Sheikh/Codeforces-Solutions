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
    makefast__
    ll i,j,m,n,l,t,s,x,p=0,cnt=1,mn;
    bool  number[100007];
    memset(number,false,sizeof(number));
    cin>>t>>s>>x;
    if(x<t)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(x==(t+1))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    x=x-t;
    x=x%s;
    if(x==0||x==1)
    {
        cout<<"YES"<<endl;
        return 0;


    }
    cout<<"NO"<<endl;


}
