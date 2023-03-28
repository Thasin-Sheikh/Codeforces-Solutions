#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,red,d,y,b,r,sum=0,ans=INT_MIN,dif,array[100000+10],f,p=1,minn,a,c=0;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    cin>>yellow>>blue>>red;

y=yellow;
while(1)
{
    if(blue>=y+1&&red>=y+2)
    {
        ans=3*y+3;
        break;
    }
    else
        y--;
}
    cout<<ans<<endl;

}
