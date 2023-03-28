#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,n,m,i,j,p,t,k=2,array[100000+10],ar[100000];
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    char ch,ph;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int >>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        vecc.push_back(make_pair(array[i],0));
    }
    for(i=0; i<m; i++)
        cin>>ar[i];
    for(i=0; i<m; i++)
    {
        for(auto j=vecc.begin(); j!=vecc.end(); j++)
        {
            if(j->first==ar[i])
            {
                j->second=-1;
            }

        }
    }
    for(auto i=vecc.begin(); i!=vecc.end(); i++)
    {
        if(i->second==-1)
            cout<<i->first<<" ";

    }
    cout<<endl;
    return 0;

}
