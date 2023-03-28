#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d=0,l=0,m,n,ans,p=2,t,k=INT_MIN,array[100000+10],q,sum1=0,cnt=0,sum=0,pro,arcopy[100000+10];
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>b>>k;
    for(i=k-1; i>=0; i--)
    {
        cin>>a;
         if((a%2==0||b%2==0)&&i>0)
            c++;
        else if(a%2==0&&i==0)
            c++;
        else d++;
    }
    if(d%2==0)
        cout<<"even"<<endl;
    else cout<<"odd"<<endl;
}
