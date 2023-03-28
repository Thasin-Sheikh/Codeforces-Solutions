
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
     if(n%2==0)
        cout<<(n*n)/2<<endl;
    else cout<<((n*n)+1)/2<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%2!=0&&j%2!=0)
            {
                cout<<'C';
            }
            else if(i%2==0&&j%2==0)
                cout<<'C';
            else cout<<'.';
        }
        cout<<endl;
    }
    return 0;
}
