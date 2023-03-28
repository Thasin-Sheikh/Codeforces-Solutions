#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[100000+100],i,j,t,flag,money,a,b,cnt=0,cn=0,c,ans,f;
    set<long long int >s;
     cin>>n>>a>>b>>c;
     ar[0]=n;
     ar[1]=a;
     ar[2]=b;
     ar[3]=c;
     sort(ar,ar+4);
     flag=ar[3];
     f=flag-ar[0];
     cout<<f<<" "<<ar[1]-f<<" "<<ar[2]-f<<endl;



}
