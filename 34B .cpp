
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,d,m,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>array[i];
    sort(array,array+n);
    for(i=0;i<m;i++)
    {
        if(array[i]<0)
            sum=sum+abs(array[i]);
    }
 cout<<sum<<endl;
}
