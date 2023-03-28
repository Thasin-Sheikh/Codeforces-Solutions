#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10000],i,n,m,ans=0,sum,min1,maxn,min2,cnt1=0,cnt2=0,cnt3=0,cnt=0,j=1,k=1,p=1,b[10000],c[10000],d[10000];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
        {
            cnt1++;
            b[j]=i;
            j++;
        }
        if(ara[i]==2)
        {
            cnt2++;
            c[k]=i;
            k++;
        }
        if(ara[i]==3)
        {
            cnt3++;
            d[p]=i;
            p++;
        }
    }
    min1=min(cnt1,cnt2);
    min2=min(cnt3,min1);
    cout<<min2<<endl;
    for(i=1; i<=min2; i++)
    {
        cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
    }
    return 0;
}
