#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,array[100000+10],ar[100000],q=90,sum1=0,cnt=INT_MIN,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    cin>>n;
    array[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>array[i];
    }
    array[n+1]=90;
    for(i=1; i<=n+1; i++)
    {
        if(array[i]-array[i-1]>15)
        {
            f=f+array[i-1];
            cout<<f+15<<endl;
            return 0;
        }

    }
    cout<<90<<endl;

}
