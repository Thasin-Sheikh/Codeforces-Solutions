#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i=0,cnt=0,mh,res,ans=0,b,c,sum=0,ar,alex,array[30];
    long long int lfirst,sec,third,mfirst,p,p2;
    set<pair<long long int,long long int>>vec;
    cin>>n>>ar>>alex;
    long long int divide[n];
    for(i=1; i<=n; i++)
        divide[i]=0;
    for(i=1; i<=ar; i++)
    {
        cin>>a;
        if(divide[a]==0)
            divide[a]=1;
    }
    for(i=1; i<=alex; i++)
    {
        cin>>a;
        if(divide[a]==0)
            divide[a]=2;
    }
    for(i=1;i<=n;i++)
        cout<<divide[i]<<" ";
    cout<<endl;

}
