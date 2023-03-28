#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,dp[100000+10],n,m,i,j,p,t,k,array[100000+10],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    long long int count[n+1];
    memset(count,0,sizeof(count));
    memset(dp,0,sizeof(dp));

    if(n<=2)
    {
        for(i=1; i<=n; i++)
        {
            cout<<'O';

        }
    }
    else
    {
        cout<<'O'<<'O';
        k=2;
        j=1;
        for(i=3; i<=n; i++)
        {
            if(j+k==i)
            {   p=j;
                j=k;
                cout<<'O';
                k=p+k;
            }
            else cout<<'o';

        }
        cout<<endl;
    }
    return 0;
}

