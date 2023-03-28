
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i=0,cnt=0,mh,res,ans=0,b,c,sum=0,in;
    long long int lfirst,sec,third,mfirst,p,p2;
    set<pair<long long int,long long int>>vec;
    cin>>n>>mh>>res;
    long long int array[n];
    for(i=1;i<=n;i++)
        array[i]=mh;
    for(i=1; i<=res; i++)
    {
        cin>>a>>b>>c;
        for(in=a; in<=b; in++)
        {
            array[in]=min(array[in],c);
        }
    }
    for(i=1;i<=n;i++)
        sum=sum+(array[i]*array[i]);
    cout<<sum<<endl;

}
