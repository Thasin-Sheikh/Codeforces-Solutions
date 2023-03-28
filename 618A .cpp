#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  a,b,c,n,m,i,j,array[100000+10],ar[100000],p=0,q,sum=0,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    vector<long long int>v;
    stack<long long int>stck;
    queue<long long int>qui;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        m=1;
        while(!v.empty()&&v.back()==m)
        {
            v.pop_back();
            m++;
        }
        v.push_back(m);
    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<'\n';


}
