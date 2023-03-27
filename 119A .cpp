#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,cnt=0;
    cin>>a>>b>>n;
    while(n>0)
    {
        n=n-(__gcd(a,n));
        cnt++;
        if(n>0)
        {
            n=n-(__gcd(b,n));
            cnt++;
        }
    }
    if(cnt%2!=0)
        cout<<0<<endl;
    else cout<<1<<endl;
}
