#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,array[100000],arr[100000],p,q,c=0,a,b,d=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a<0)
            c++;
        else
            d++;
    }
    m=min(c,d);
    if(m<=1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
