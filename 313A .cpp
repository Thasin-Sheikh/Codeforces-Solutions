#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,m,i,j,ans,sum=0,num,a;
    cin>>n;
    a=n;
    if(n>=0)
    {
        cout<<n<<endl;
        return 0;
    }
    if(n<0)
    {
        ans=n%10;
        n=n/10;
        sum=n%10;
        if(sum>ans)
            num=a/10;
        else
        num=a%10+(a/100)*10;
    }
    cout<<num<<endl;
}
