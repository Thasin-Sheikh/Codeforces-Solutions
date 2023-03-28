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
    cin>>n;
    if(n==0)
    {
        cout<<"O-|-OOOO"<<endl;
        return 0;
    }
    m=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    for(i=1;i<=c;i++)
    {
       while(m>0)
       {
          k=m%10;
          m=m/10;
          //cout<<k<<endl;
          if(k>=5)
          {
              cout<<"-O|";
              k=k-5;
              for(j=1;j<=k;j++)
              {
                  cout<<"O";
              }
              cout<<"-";
              l=5-k;
              for(int in =1;in<=l-1;in++)
              {
                  cout<<"O";
              }
          }
          else
          {
              cout<<"O-|";
              for(j=1;j<=k;j++)
              {
                  cout<<"O";
              }
              cout<<"-";
              l=5-k;
              for(int in=1;in<=l-1;in++)
                cout<<"O";
          }
          cout<<endl;
       }
    }

}
