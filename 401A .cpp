#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=0,dif,array[100000+10],f,p=1,minn,a,c=0,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    string str;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ans+=a;
    }
    ans=abs(ans);
    d=ans/m;
    if(ans%m!=0)
        d++;
    cout<<d<<endl;




}
