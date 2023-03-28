#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,n,m,i,j,p,t,k=2,array[200000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    p=array[n-1];
    for(i=n-2; i>=0; i--)
    {
        if(array[i]!=p)
        {
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}

