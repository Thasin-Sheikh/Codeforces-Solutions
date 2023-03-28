#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=INT_MIN,flag,ans,f,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    char ch1;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(array,array+n);
    sort(ar,ar+m);
    if(array[0]>=ar[m-1])
    {
        cout<<k<<endl;
        return 0;
    }
    l=0;
    f=m-1;
    array[n]=INT_MAX;
    ar[-1]=0;
    while(1)
    {
        flag=k/array[l];
        k=k%array[l];
        l++;
        t=flag*ar[f];
        f--;
        if(array[l]>=ar[f]||k==0||k<array[l])
            break;
     //cout<<k<<" "<<t<<endl;


    }
    //cout<<k<<endl;
    ans=t+k;
    cout<<ans<<endl;


}
