#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,n,m,i,j,p=0,t,k=0,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i]%2==0)
            c++;
        else d++;
    }
    for(i=0; i<m; i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)
            p++;
        else k++;

    }
    long long int     ans;
    ans=min(c,k)+min(d,p);
    cout<<ans<<endl;
}

