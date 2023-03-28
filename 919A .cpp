#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,n,m,ans,frac,minn=1889990876789.39467789;
    int i;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        frac=a/b;
        minn=min(minn,frac);
    }
    ans=m*minn;
    printf("%.8f",ans);
    return 0;
}
