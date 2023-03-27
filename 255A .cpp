#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,g,i=1,j,p=0,t,k,f,array[100000+10],ar[100000],sum1=0,cnt=0,sum=0,flag,ans,s=0;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    queue<long long int>q;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<=n; i+=3)
    {
        p=p+array[i];

    }

    for(i=2; i<=n; i+=3)
    {
        sum=sum+array[i];

    }

    for(i=3; i<=n; i+=3)
    {
        s=s+array[i];
    }
    //cout<<p<<" "<<s<<" "<<sum<<endl;
    ans=max(p,max(s,sum));
    //cout<<ans<<endl;
    if(ans==p)
        cout<<"chest"<<endl;
    else if(ans==sum)
        cout<<"biceps"<<endl;
    else cout<<"back"<<endl;

}
