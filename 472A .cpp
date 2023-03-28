#include<bits/stdc++.h>
using namespace std;
int composite( long long int x)
{
    long long int p,flag=0;
    for(p=2; p<x; p++)
    {
        if(x%p==0)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
        return 1;
    else
        return 0;
}
int main()
{
    long long int n,m,sum=0,sum1=0,flag=0,cnt=0,i,j;
    string str;
    char ch;
    cin>>n;
    for(i=2; i<n; i++)
    {
        for(j=2; j<n; j++)
        {
            if((i+j==n)&&composite(i)&&composite(j))
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            else
                continue;
        }
    }
}
