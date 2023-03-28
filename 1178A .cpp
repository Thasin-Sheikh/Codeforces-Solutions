#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    double n;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    cin>>n;
    cin>>p;
    sum=sum+p;
    sum1=sum1+p;
    for(i=1; i<n; i++)
    {
        cin>>array[i];
        sum1=sum1+array[i];
        if(p>=array[i]*2)
        {
            vi.push_back(i+1);
            sum=sum+array[i];
        }
    }
    l=sum1-sum;
    //cout<<sum1<<endl;
    if(sum<=l)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        cout<<vi.size()+1<<endl;
        cout<<1<<" ";
        for(i=0;i<vi.size();i++)
            cout<<vi[i]<<" ";
        cout<<endl;
    }

}
