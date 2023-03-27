#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d=0,m,n,ans,p=2,t,k=INT_MIN,array[200000+10],q,sum1=0,cnt=0,sum=0;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a%2==0)
            c++;
        else d++;
        sum=sum+a;
    }

    if(sum%2==0)
        cout<<c<<endl;
    else cout<<d<<endl;



}
