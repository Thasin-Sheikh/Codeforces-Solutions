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
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>array[i];
    }
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        k=array[a]-b;
        if(a!=n)
        {
            array[a+1]=array[a+1]+(k);
        }
        if(a!=1)
        {
            array[a-1]=array[a-1]+(array[a]-(k+1));
        }
       // cout<<array[a-1]<<" "<<array[a+1]<<" "<<endl;
        array[a]=0;
    }
    for(i=1;i<=n;i++)
        cout<<array[i]<<endl;
}
