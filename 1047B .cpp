#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d,m,n,p=2,t,k=INT_MIN,array[200000+10],q,sum1=0,cnt,sum=0,ans=INT_MIN,an=INT_MIN,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        c=a+b;
        k=max(k,c);
    }
    cout<<k<<endl;

}
