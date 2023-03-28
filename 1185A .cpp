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
    cin>>a>>b>>c>>d;
    array[0]=a;
    array[1]=b;
    array[2]=c;
    sort(array,array+3);
    a=array[0];
    b=array[1];
    c=array[2];
    if(abs(b-c)<d)
    {
        r=d-(abs(b-c));
        ans=ans+r;
    }
    if(abs(a-b)<d)
    {
        y=d-abs(a-b);
        ans=ans+y;

    }
    cout<<ans<<endl;
}
