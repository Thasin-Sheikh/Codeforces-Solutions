#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,d=0,m,n,p,t=0,k,array[100000+10],q,sum1,cnt=0,sum,flag,ans,f=0,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
   cin>>a>>b>>c;
   cin>>n;
   for(i=0;i<n;i++)
        cin>>array[i];
   sort(array,array+n);
   for(i=0;i<n;i++)
   {
       if(array[i]<=a&&array[i]>b)
        cnt++;
       else if(array[i]>=a&&array[i]<c)
        cnt++;
   }
   cout<<cnt<<endl;
}
