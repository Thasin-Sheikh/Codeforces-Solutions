#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,t,array[100000+10],ar[100000],q,sum=0,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str[100],ptr[100],sp[5000],p[20];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=1; i<=n; i++)
        cin>>str[i];
        str[0]=str[n];
    for(i=1; i<=m; i++)
        cin>>ptr[i];
        ptr[0]=ptr[m];
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a>n&&a<=m)
            cout<<str[a%n]+ptr[a]<<endl;
        else if(a<=n&&a>m)
            cout<<str[a]+ptr[a%m]<<endl;
        else if(a>n&&a>m)
            cout<<str[a%n]+ptr[a%m]<<endl;
        else cout<<str[a]+ptr[a]<<endl;
    }




}
