#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,ans,n,m,x,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag,f;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        p=min(a,b);
        c=max(a,b);
        d=c+x;
        if(d>n)
        {
            flag=n-c;
            x=x-flag;
            f=min(abs(1-p),x);
            p=p-f;
            ans=n-p;

        }
        else ans=d-p;
        cout<<ans<<endl;

    }


    return 0;
}

