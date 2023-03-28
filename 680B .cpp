#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,dis,ans=0,t[1000];
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin >>t[i];
    }
    for(i=1; i<=n; i++)
    {
        if(t[i])
        {
            dis=i-k;
            j=k-dis;
            if(j<1||j>n||t[i]==t[j])
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

