#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<=n; i++)
    {
        if(array[i]%2==0)
            cout<<array[i]-1<<" ";
        else cout<<array[i]<<" ";
    }
    cout<<endl;


    return 0;
}

