#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        scanf("%d",&a);
        int ans=1;
        while(a)
        {
            if(a&1) ans<<=1;
            cout<<ans<<" ";
            a>>=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
