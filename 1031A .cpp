#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,n,ans=0,m,i,j,p,t,k=0,array[200000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    char ch,ph;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m>>a;
    for(i=1; i<=a; i++)
    {
        ans=ans+(2*(n+m)-4);
        n=n-4;
        m=m-4;
    }
    cout<<ans<<endl;

}
