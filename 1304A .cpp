#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=5,b,c,d,n,m,i=1,j,p,t,k,f,array[100000+10],ar[100000],q,sum1=0,cnt,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>a>>b>>c>>d;
         k=b-a;
         p=c+d;
         if(k%p!=0)
            cout<<-1<<endl;
         else cout<<k/p<<endl;

    }
}
