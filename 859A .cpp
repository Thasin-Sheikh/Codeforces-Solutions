#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i=0,cnt=0,mh,res,ans=0,b,c,sum=0,in,array[30];
    long long int lfirst,sec,third,mfirst,p,p2;
    set<pair<long long int,long long int>>vec;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>array[i];
    sort(array,array+n);
    p=array[n-1];
    if(p<=25)
        cout<<0<<endl;
    else cout<<p-25<<endl;
}
