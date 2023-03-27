#include<bits/stdc++.h>
using namespace std;
int main()
{
    int   a,b,c=0,d=0,m,n,p,t=0,k,array[100000+10],q,sum1,cnt=0,sum,flag,ans,f=0,l;
    long long int st,ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    long long int cha[105][105];
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           cin>>cha[i][j];
       }
   }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           p=cha[i][j];
           sum1=0,sum=0;
           for(k=1;k<=n;k++)
           {
               sum=sum+cha[i][k];
           }
           for(l=1;l<=n;l++)
           {
               sum1=sum1+cha[l][j];
           }
           if(sum1>sum)
            cnt++;
       }
   }
  cout<<cnt<<endl;

}
