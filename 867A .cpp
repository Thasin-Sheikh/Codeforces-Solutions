#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,t,array[100000+10],ar[100000],q,sum=0,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr[100],sp[5000],p[20];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='S'&&str[i+1]=='F')
            cnt++;
        else if(str[i]=='F'&&str[i+1]=='S')
            cnt2++;
    }
    if(cnt>cnt2)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
