
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,time,d,m,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n>>time;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
    b=(n-1)*10;
    b=b+sum;
    if(b>time)
    {
        cout<<-1<<endl;
        return 0;
    }
    m=time-sum;
    a=m/5;
    cout<<a<<endl;


}
