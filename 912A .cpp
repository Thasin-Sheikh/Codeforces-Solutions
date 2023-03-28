
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,ans1=0,j,blue,i,red,l,bl,cnt=0,d,y,sum1,b,r,sum,t,ans,dif,array[200000+10],f,p=1,minn,a,c,e,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    memset(prime,true,sizeof(prime));
    list<char>ptr;
    cin>>yellow>>blue;
    cin>>a>>b>>c;
    y=a*2+b;
    bl=b+3*c;
    l=y-yellow;
    if(l<0)
        l=0;
    m=bl-blue;
    if(m<0)
        m=0;
    cout<<l+m<<endl;


}
