#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,ans1=0,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=0,dif,array[100000+10],f,p=1,minn,a,c,e,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    string str;
    cin>>a>>b>>c>>d;
    cin>>e>>f;
    long long int a1,b1,c1,d1;
    a1=a;
    b1=b;
    c1=c;
    d1=d;
    while(b&&c&&d)
    {
        ans=ans+f;
        b--;
        c--;
        d--;
    }
    while(d&&a)
    {
        ans=ans+e;
        d--;
        a--;
    }
    while(d1&&a1)
    {
        ans1=ans1+e;
        d1--;
        a1--;
    }
    while(b1&&c1&&d1)
    {
        ans1=ans1+f;
        b1--;
        c1--;
        d1--;
    }
    cout<<max(ans1,ans)<<endl;

}
