#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long long int>s;
    int i,j,m,n,ans;
    long long int a[10];
    for(i=0; i<4; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<4; i++)
    {
        s.insert(a[i]);
    }
    ans=4-s.size();
    cout<<ans<<endl;
    return 0;
}
