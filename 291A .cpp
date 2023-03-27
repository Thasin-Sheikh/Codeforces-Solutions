#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans=INT_MAX,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    long long int array[100000];
    long long int count[1000000];
    memset(count,0,sizeof(count));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(i=0;i<n-2;i++)
    {
        if(array[i]!=0&&array[i]==array[i+2])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(array[i]!=0&&array[i]==array[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
}
