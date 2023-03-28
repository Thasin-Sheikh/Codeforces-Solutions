#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,array[100000+10],ar[100000],q,sum=0,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000],p;
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='a')
            cnt++;
    }
   m=str.length();
if(cnt>m/2)
    cout<<str.length();
else if(cnt<=m/2)
cout<<cnt+cnt-1<<endl;


}
