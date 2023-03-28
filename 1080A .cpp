
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,ans=0,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    ans=ans+(2*n)/m;
    if((2*n)%m!=0)
        ans++;
    ans=ans+(5*n)/m;
    if((5*n)%m!=0)
        ans++;
    ans=ans+(8*n)/m;
    if((8*n)%m!=0)
        ans++;
    cout<<ans<<endl;

    return 0;
}
