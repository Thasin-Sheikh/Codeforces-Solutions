#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d=0,m,n,p=2,t,k=INT_MIN,array[200000+10],q,sum1=0,cnt=0,sum=0,ans=INT_MIN,an=INT_MIN,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>a>>b>>c>>d;
    m=max((3*a)/10,(a-(a/250)*c));
    n=max((3*b)/10,(b-(b/250)*d));

    if(m>n)
        cout<<"Misha"<<endl;
    else if(m<n)
    {
        cout<<"Vasya"<<endl;
    }
    else cout<<"Tie"<<endl;


}
