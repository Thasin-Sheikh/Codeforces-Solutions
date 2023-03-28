#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,ans=0,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(i=0;i<n-1;i+=2)
    {
        long long int dif;
        dif=array[i+1]-array[i];
        //cout<<dif<<endl;
        ans=ans+dif;
    }
    cout<<ans<<endl;


    return 0;
}


