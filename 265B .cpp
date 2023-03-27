#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>array[i];

     for(i=0;i<n;i++)
     {
         if(i==0)
            sum+=array[i]+1;
         else if(array[i]==array[i-1])
            sum+=2;
         else sum+=abs(array[i]-array[i-1])+2;
     }
    cout<<sum<<endl;



}
