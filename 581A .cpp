#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,cnt=0,ans,maxn,minn;
    cin>>n>>m;
    minn=min(n,m);
    maxn=max(n,m);
    ans=(maxn-minn)/2;
    cout<<minn<<" "<<ans<<endl;

}
