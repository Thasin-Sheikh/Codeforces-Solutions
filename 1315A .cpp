
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,f,n,ans=0,m,i,j,p,t,k=0,array[200000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    char ch,ph;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        cout<<max(max(c,a-1-c)*b,a*max(d,b-1-d))<<endl;
    }
}
