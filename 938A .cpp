#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    char ch1;
    cin>>n;
    cin>>str;
    for(i=str.length()-1; i>=0; i--)
    {
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')&&(str[i-1]=='a'||str[i-1]=='y'||str[i-1]=='e'||str[i-1]=='i'||str[i-1]=='o'||str[i-1]=='u'))
            continue;
        else
            ptr+=str[i];
    }
    reverse(ptr.begin(),ptr.end());
    cout<<ptr<<endl;
}

