#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p=0,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    int array[101];
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>n;
    for(i=0;i<n;i++)
        cin>>array[i];
    sort(array,array+n);
    cout<<array[n/2]<<endl;

}
