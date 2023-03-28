
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,p,k,f,cnt,mh,res,ans=0,b,c,sum=0,ar,alex,array[200000+10],flag[200000+10],p3,point;
    long long int lfirst,sec,third,mfirst,p2;
    vector<pair<long long int,long long int>>vec;
    char ch [101][101];
    cin>>n;
    f=0;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
        array[i]+=f;
        f=max(f,array[i]);
        cout<<array[i]<<" ";
    }


   cout<<endl;
}
