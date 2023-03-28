#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<long long int >v,v1;
    stack<long long int>stck;
    cin>>n>>str;
    str[n]='C';
    for(i=0; i<=str.length(); i++)
    {
        if(str[i]=='B')
            cnt++;
        else
        {
            v.push_back(cnt);
            cnt=0;
        }
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i]!=0)
            v1.push_back(v[i]);
    }
    cout<<v1.size()<<endl;
    for(i=0; i<v1.size(); i++)
    {
           cout<<v1[i]<<" ";
    }
    cout<<endl;


    return 0;
}

