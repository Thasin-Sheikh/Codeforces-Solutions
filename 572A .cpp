#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d,m,n,p=2,t,k=INT_MIN,array[100000+10],q,sum1=0,cnt=0,sum=0,ans=INT_MIN,an=INT_MIN,f,l;
    long long int ct,qt,i,j;
    long long int  arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<long long int>vc,v;
    set<char>sc;
    cin>>n>>m;
    cin>>a>>b;
    for(i=0;i<n;i++)
        cin>>array[i];
    for(i=0;i<m;i++)
        cin>>arr[i];
    sort(array,array+n);
    sort(arr,arr+m);
    for(i=0;i<=n;i++)
    {
        vc.push_back(array[i]);
        cnt++;
        if(cnt==a)
            break;

    }
     for(i=m-1;i>=0;i--)
    {
        v.push_back(arr[i]);
        c++;
        if(c==b)
            break;
    }
    /*for(i=0;i<vc.size();i++)
        cout<<vc[i]<<" ";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";*/
    sort(vc.begin(),vc.end());
    sort(v.begin(),v.end());
    if(vc[vc.size()-1]<v[0])
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
