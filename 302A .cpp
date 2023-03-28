#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c1=0,c2=0,d,m,i,n,j,p,t=0,k,array[200000+10],ar[100000],q,sum1=0,cnt=0,sum,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
            c1++;
        else c2++;

    }
    d=min(c1,c2);
    while(m--)
    {
        sum=0;
        cin>>a>>b;
        int dif=abs(b-a);
        dif++;
        if(dif%2!=0)
            cout<<0<<endl;
        else if((dif/2)>d)
            cout<<0<<endl;
        else cout<<1<<endl;
    }

}
