#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x,y,g,ans;
    cin>>a>>b>>x>>y;
    g=__gcd(x,y);
    x=x/g;
    y=y/g;
    ans=min((a/x),(b/y));
    cout<<ans<<endl;
}
