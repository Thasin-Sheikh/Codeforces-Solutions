#include<bits/stdc++.h>
using namespace std;

bool check(long long int n)
{
    long long int m,sum=0;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    if(sum%4==0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    long long int n,i;
    cin>>n;
    for(i=n;;i++)
    {
        if(check(i))
        {
            cout<<i<<endl;
            return 0;
        }
        else continue;
    }
}
