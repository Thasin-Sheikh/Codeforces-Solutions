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
    cin>>n>>m;
    for(i=1; i<=n; i++)
        cin>>array[i];
    for(j=1; j<=m; j++)
        cin>>ar[j];
     long long int   p=1;
    for(i=1;i<=m;i++)
    {
        flag=1;
        for(j=p;j<=n;j++)
        {
            if(array[j]<=ar[i])
            {
                array[j]=INT_MAX;
                cnt++;
                flag=0;
                //cout<<ar[i]<<" "<<cnt<<" ";
                p=j;
                break;

            }
            else continue;
        }
        if(flag)
            break;
    }
  cout<<cnt<<endl;

}
