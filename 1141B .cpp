#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d=0,m,n,p=2,t,k=INT_MIN,array[200000+10],q,sum1=0,cnt=0,sum=0,ans=INT_MIN,an=INT_MIN,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n;
    array[n]=0;
    for(i=0; i<n; i++)
        cin>>array[i];
    for(i=n-1; i>=0; i--)
    {
        if(array[i]==1)
            d++;
        else break;
    }
    for(i=0; i<n; i++)
    {
        if(array[i]==1)
            c++;
        else break;
    }
    for(i=0; i<=n; i++)
    {
        if(array[i]==1)
            cnt++;
        else
        {
            ans=max(cnt,ans);
            cnt=0;
        }
    }
    if(array[0]==1&&array[n-1]==1)
    {
        ans=max(ans,c+d);
    }
    cout<<ans<<endl;

}
