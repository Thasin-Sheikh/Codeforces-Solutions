#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    char ch1;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    l=str.length();
    for(i=0;i<l/2;i++)
    {
        k=str[i]-'0';
        sum1=sum1+k;
    }
     for(i=l/2;i<l;i++)
    {
        k=str[i]-'0';
        sum=sum+k;
    }
    //cout<<sum1<<" "<<sum<<endl;
    if(sum1==sum)
     cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
