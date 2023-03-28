#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>a>>b>>c;
    while(a>0&&b>1&&c>3)
    {
        a=a-1;
        sum=sum+1;
        b=b-2;
        sum=sum+2;
        c=c-4;
        sum=sum+4;
    }
   cout<<sum<<endl;

    return 0;
}

