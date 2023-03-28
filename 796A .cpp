#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,t1w,t1h,t2w,t2h,b,n,m,k,i,j,sweight,sheight,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag,c,f,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
    }
    for(i=m+1;i<=n;i++)
    {
        if(array[i]<=k&&array[i]>0)
        {
            flag=i;
            break;
        }
        else
        {
            flag=INT_MAX;
        }
    }
    for(i=m;i>=1;i--)
    {
        if(array[i]<=k&&array[i]>0)
        {
            f=i;
            break;
        }
        else
        {
            f=INT_MAX;
        }

    }
    long long int p1=abs(flag-m)*10;
    long long int p2=abs(m-f)*10;
    //cout<<p1<<" "<<p2<<endl;
    ans=min(p1,p2);
    cout<<ans<<endl;

}
