#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,s,a,b,f,c,test,sum=0,sum1=0,i,j,l;
    string str;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        m=max(a,max(b,c));
        n=min(a,min(b,c));
        f=sum-(m+n);
        if(m>n+f+1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
