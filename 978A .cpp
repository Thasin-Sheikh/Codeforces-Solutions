#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<long long int>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        vecs.insert(array[i]);
    }
    cout<<vecs.size()<<endl;
    for(i=n-1; i>=0; i--)
    {
        for(auto it=vecs.begin(); it!=vecs.end(); it++)
        {
            if(*it==array[i])
            {
              vecc.push_back(array[i]);
                vecs.erase(array[i]);
                break;
            }
        }
    }
    reverse(vecc.begin(),vecc.end());
    for(i=0;i<vecc.size();i++)
        cout<<vecc[i]<<" ";
    cout<<endl;


    return 0;
}

