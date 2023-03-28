#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<long long int>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>array[i];
    }
   for(i=1;i<=t;i++)
   {
       if(array[array[array[i]]]==i)
       {
           cout<<"YES"<<endl;
           return 0;
       }
   }
   cout<<"NO"<<endl;}

