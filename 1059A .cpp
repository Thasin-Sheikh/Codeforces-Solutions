#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,array[100000+10],ar[100000],p,q,sum=0,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    cin>>n>>a>>b;
    for(i=0; i<n; i++)
    {
        cin>>array[i]>>ar[i];


    }
    for(i=0; i<n; i++)
    {
        ans=ans+(array[i]-s)/b;
        s=array[i]+ar[i];
    }
    ans=ans+(a-s)/b;
    cout<<ans<<endl;

}



