#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans=0,p1,p2,p3,p4;
    cin>>a>>b>>c;
    p1=min(a,b);
    p4=max(a,b);
    ans=ans+p1;
    p2=min((a+b),c);
    ans=ans+p2;
    p3=min((p1+c),p4);
    ans=ans+p3;
    cout<<ans<<endl;
    return 0;
}
