#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[100000],i,sum=0,count[30],cnt=0,cnt1=0,ans,maxn=INT_MIN;
    string s,str,ptr;
    cin>>n;
    ar[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
        if(ar[i]>=ar[i-1])
        {
            cnt++;
            maxn=max(cnt,maxn);
        }
        else
        {
            cnt=0;
            cnt++;
        }
    }
    cout<<maxn<<endl;


}
