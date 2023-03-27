#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,d=0,m,n,p,t=0,k,array[100000+10],q,sum1,cnt=0,sum,ans,f=0,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string ptr,sp[5000],st;
    char str[1000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    t=3;
    bool flag=true;
    gets(str);
    for(i=0;str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            cnt++;
    }
    if(cnt!=5)
        flag=false;
    cnt=0;
    gets(str);
    for(i=0;str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            cnt++;
    }
    if(cnt!=7)
        flag=false;
    cnt=0;
    gets(str);
    for(i=0; str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            cnt++;
    }
    if(cnt!=5)
        flag=false;
 if(flag)
    cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}
