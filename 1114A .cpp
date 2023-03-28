#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,g,i=1,j,p,t,k,f,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>a>>n>>c;
    cin>>g>>p>>b;
    b=b+g+p-(a+n);
    if(a>g)
    {
        cout<<"NO"<<endl;
    }
    else if(g-a+p<n)
    {
        cout<<"NO"<<endl;
    }
    else if(b<c)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
