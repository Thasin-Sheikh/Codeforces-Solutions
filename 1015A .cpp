#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        vecs.insert(make_pair(a,b));
    }
    for(i=1; i<=m; i++)
    {
        flag=1;
        for(auto it=vecs.begin();it!=vecs.end();it++)
        {
            if((i>=it->first)&&(i<=it->second))
            {
                flag=0;

            }

        }
        if(flag==1)
            vecc.push_back(i);
    }
    cout<<vecc.size()<<endl;
    for(i=0; i<vecc.size(); i++)
        cout<<vecc[i]<<" ";
    cout<<endl;

    return 0;
}

