#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[100000+100],i,j,t,flag,money,a,b,cnt=0,cn=0;
    set<long long int >s;
    cin>>n;
    while(n!=0)
    {
        if(n>=100)
        {
            n=n-100;
            cnt++;
        }
        else if(n>=20)
        {
            n=n-20;
            cnt++;
        }
        else if(n>=10)
        {
            n=n-10;
            cnt++;
        }
        else if(n>=5)
        {
            n=n-5;
            cnt++;
        }
        else {
            n=n-1;
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
