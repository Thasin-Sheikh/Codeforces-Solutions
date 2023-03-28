#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long  int n,i,j,m;
    long long  int cnt=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,ans,cnt6=0,cnt7=0,ans1;
    cin>>n;
    long long  int a[100000+10];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>1)
        {
            cnt1=cnt1+(a[i]-1);
            a[i]=a[i]-(a[i]-1);
        }
        if(a[i]!=0&&a[i]<1)
        {
            cnt2=cnt2+(abs(a[i])-1);
            a[i]=a[i]+(abs(a[i])-1);
        }
    }
    cnt=cnt1+cnt2;
    for(i=0; i<n; i++)
    {
        if(a[i]==0)
            cnt3++;
        if(a[i]==1)
            cnt4++;
        if(a[i]==-1)
            cnt5++;

    }
    if(cnt3>=1){
    ans=cnt+cnt3;}
    if(cnt3==0)
    {
        if(cnt5%2==0)
            ans=cnt3+cnt;
        else
            ans=cnt3+cnt+2;
    }
    cout<<ans<<endl;

    return 0;
}
