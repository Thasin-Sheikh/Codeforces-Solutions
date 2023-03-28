#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    vector<pair<long long int,long long int >>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i]>>ar[i];

    }
    cin>>m;
    for( i=0; i<n; i++)
    {
        if(m>=array[i]&&m<=ar[i])
        {
            ans=i;
            break;
        }

    }
    cout<<n-ans<<endl;

    return 0;
}

