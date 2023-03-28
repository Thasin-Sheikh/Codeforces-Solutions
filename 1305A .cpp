
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(array,array+n);
        sort(ar,ar+n);
        for(i=0; i<n; i++)
            cout<<array[i]<<" ";
        cout<<endl;
        for(i=0; i<n; i++)
            cout<<ar[i]<<" ";
        cout<<endl;
    }


}

