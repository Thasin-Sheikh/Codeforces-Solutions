#include<bits/stdc++.h.>
using namespace std;
int main()
{
    long long int n,i,j;
    cin>>n;
    long long int x;
    cin>>x;
    long long int GCD=x;
    for(i=1;i<n;i++)
    {
        cin>>x;
        GCD=__gcd(GCD,x);
    }
    long long cnt=0;
    for(i=1;i*i<=GCD;i++)
    {
        if(GCD%i==0)
        {
            cnt+=2;
        }
        if(i*i==GCD)
            cnt--;
    }
    cout<<cnt<<endl;
}
