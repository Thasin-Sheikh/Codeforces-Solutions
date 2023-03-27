#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, l, c, d, p, nl, np,f1,f2,f3,f4,f5,cnt=0,ans=0,flag=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    f1=k*l;
    f2=c*d;
    while(f1>=nl&&f2>0&&p>=np)
    {
        f1=f1-nl;
        f2--;
        p=p-np;
        cnt++;
    }
    ans=cnt/n;
    cout<<ans<<endl;
}
