#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int maxn,n,i,b,c,t,ans=0,sum=0,d=0,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<long long int >vec;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>c>>n;
        maxn=max(a,max(b,c));
        sum=sum+n+a+b+c;
        if(sum/3>=maxn&&sum%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
