#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar,i,j,m,index,a,b,c,d,ans;
    cin>>n>>m>>a>>b;
    if(n>m)
    {
        index=(n/m)*b;
        if(n%m!=0)
        {
            ar=min((n%m)*a,b);
            ans=min(n*a,index+ar);
        }
        else
            ans=min(n*a,index);
    }
    else
        ans=min(n*a,b);
    cout<<ans<<endl;



}
