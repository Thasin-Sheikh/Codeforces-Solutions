#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[100000+100],i,j,t,flag,money,a=0,b,cnt=0,cn=0,c,ans,m;
    set<long long int >s;
    cin>>n>>m;
    ans=n;
    for(i=1; i<=n; i++)
    {
        if(i%m==0)
        {
            cnt++;
            n++;
        }
    }
   cout<<ans+cnt<<endl;

}
