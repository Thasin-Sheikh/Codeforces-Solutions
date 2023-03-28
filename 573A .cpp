#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,s,a,b,f,c=0,d=0,ans,test,sum=0,sum1=0,i,j,l,array[100000+10];
    string str;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>array[i];
        while(array[i]%2==0)
        {
            array[i]=array[i]/2;
        }
        while(array[i]%3==0)
        {
            array[i]=array[i]/3;
        }

    }
    for(i=2;i<=n;i++)
    {
        if(array[i]!=array[1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;



}
