#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,t,k,array[100000+10],ar[100000],q,sum,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000],p;
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>n;
        if(n%2!=0)
        {
            for(i=1; i<=(n/2)+1; i++)
                sum=sum+a;
            k=n-((n/2)+1);
            ans=sum-(k*b);
        }
        else
            ans=a*(n/2)-b*(n/2);
        cout<<ans<<endl;

    }


}
