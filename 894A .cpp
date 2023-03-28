#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=5,b,c,d,n,m,i=1,j,p,t,k,f,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        for(j=i+1;j<str.length();j++)
        {
            for(k=j+1;k<str.length();k++)
            {
                if(str[i]=='Q'&&str[j]=='A'&&str[k]=='Q')
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}
