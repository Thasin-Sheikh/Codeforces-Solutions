#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,g,i=1,j,p,t,k,f,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>array[i];
    sort(array,array+n);
    p=array[0];t=array[n-1];
    ans=(t-p+1)-n;
    cout<<ans<<endl;


}
