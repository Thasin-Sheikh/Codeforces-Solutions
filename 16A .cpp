#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    char array[101][101];
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>array[i][j];

        }
    }
     for(i=1;i<=n;i++)
    {
        p=array[i][1];
        for(j=1;j<=m;j++)
        {
          if(array[i][j]!=p)
          {
              cout<<"NO"<<endl;
              return 0;
          }
        }
    }
    for(i=1;i<=n;i++)
    {
       if(array[i][1]==array[i+1][1])
       {
           cout<<"NO"<<endl;
           return 0;
       }
    }
 cout<<"YES"<<endl;



}
