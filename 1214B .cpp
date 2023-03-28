#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,n,cnt=0,j,i;
    cin>>b>>g>>n;
    for(i=0;i<=b;i++)
    {
        for(j=0;j<=g;j++)
        {
           if((i+j)==n)
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
