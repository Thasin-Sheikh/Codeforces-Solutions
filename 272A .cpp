#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        sum+=array[i];
    }
    m=n+1;
    if(sum==1){
        cout<<3<<endl;
    return 0;}
    for(i=1;i<=5;i++)
    {
        if((sum+i)%m!=1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
