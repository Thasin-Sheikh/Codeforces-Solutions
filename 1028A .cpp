#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,cnt1=0,cnt2=0,i,j,ans1,ans2,minr=INT_MAX,maxr=INT_MIN,minc=INT_MAX,maxc=INT_MIN;
    char ch;
    vector<long long int>v;
    vector<long long int>vec;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           cin>>ch;
           if(ch=='B')
           {
               minr=min(minr,i);
               maxr=max(maxr,i);
               minc=min(minc,j);
               maxc=max(maxc,j);
           }
        }
    }
     cout<<(minr+maxr)/2<<" "<<(minc+maxc)/2<<endl;



}
