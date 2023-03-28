#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=0,dif,array[100000+10],f,p=1,minn,a,c=0,flag,f1,f2;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
        if(array[i]==1)
            f1=i;
        if(array[i]==n)
            f2=i;
    }
    //cout<<f1<<" "<<f2<<endl;
   d=max((n-f1),(n-f2));
   //cout<<d<<endl;
   y=max((f2-1),(f1-1));
   //cout<<d<<endl;
   cout<<max(d,y)<<endl;


}
