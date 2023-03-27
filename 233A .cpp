#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,g,i=1,j,p,t,k,f,array[100000+10],ar[100000],sum1=0,cnt=0,sum=INT_MIN,flag,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    queue<long long int>q;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        array[i]=i;
    }
    for(i=1;i<n;i+=2)
    {
      swap(array[i],array[i+1]);
    }
    for(i=1;i<=n;i++)
        cout<<array[i]<<" ";
    cout<<endl;



}
