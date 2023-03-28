
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int   a,b,c,d,m,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>str;
   if(str[0]=='4')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(str.find("444")!=str.npos)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0; i<str.length();i++)
    {
        if(str[i]!='1'&&str[i]!='4')
        {
            cout<<"NO"<<endl;
            return 0;
        }


    }
    cout<<"YES"<<endl;


}
