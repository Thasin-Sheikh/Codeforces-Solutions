#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=1;i<=n*m;i++)
    {
        cin>>a>>b;
        if(a==1||b==1)
            cnt++;
    }
     cout<<cnt<<endl;
}

