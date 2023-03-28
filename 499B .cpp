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
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>str>>ptr;
        vecs.insert(make_pair(str,ptr));

    }
    for(i=0; i<n; i++)
    {
        cin>>sp[i];
    }

    for(i=0; i<n; i++)
    {
        p=sp[i];
        for(auto it=vecs.begin(); it!=vecs.end(); it++)
        {
            if(it->first==p||it->second==p)
            {
                if(it->first.length()<it->second.length())
                    cout<<it->first<<" ";
                else if(it->first.length()==it->second.length())
                    cout<<p<<" ";
                else cout<<it->second<<" ";
                break;
            }
        }
    }
    cout<<endl;


}
