#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,no,i,j,ar[100000],m,flag,cnt=0,ans;
    cin>>n>>m;
    ans=n;
    while(n>=m)
    {
        no=n/m;
        flag=n%m;
        ans+=no;
        n=no+flag;
    }

    cout<<ans<<endl;

}
