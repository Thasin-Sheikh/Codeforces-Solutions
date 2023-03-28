#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,l,v,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v=INT_MIN;
        l=INT_MAX;
        for(i=1; i<=n; i++)
        {
            cin>>array[i];
        }
        sort(array,array+n+1);

        for(i=1;i<=n;i++)
        {
            p=array[i];
            k=n-i+1;
            l=min(p,k);
            v=max(l,v);

        }
        cout<<v<<endl;

    }

    return 0;
}

