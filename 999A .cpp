#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>array[i];
    for(i=0,j=n-1;i<n,j>=0;)
    {
        //cout<<array[i]<<endl;
        if(array[i]<=m)
        {
          cnt++;
          i++;
        }
        else if(array[j]<=m)
        {
            cnt++;
            j--;
        }
        else break;
        if(cnt==n)
            break;
    }
  cout<<cnt<<endl;

    return 0;
}

