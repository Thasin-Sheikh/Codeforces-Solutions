#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,cnt=0,ans,x,y;
    cin>>a>>b;
    //x=a;
    y=((a-1)/2)+1;
    //cout<<y<<endl;
    ans=(y/b)*b;
    //cout<<y<<" "<<ans<<endl;
    while(ans<y)
        ans=ans+b;
   if(b>a)
    cout<<-1<<endl;
   else cout<<ans<<endl;


}
