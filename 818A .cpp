#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans=INT_MIN,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    char array[101][101];
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>n>>m;
    if(n<=m)
    {
        cout<<0<<" "<<0<<" "<<n<<endl;
        return 0;
    }
    l=n/2;
        //cout<<l<<endl;
    k=l/(m+1);
    if(k+(k*m)>l)
        k--;
    cout<<k<<" "<<m*k<<" "<<(n-(k+(m*k)))<<endl;
}
