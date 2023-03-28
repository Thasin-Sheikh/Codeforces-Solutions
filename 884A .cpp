#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m=0,a,i,k,j,array[100000],c=0,d=0,e,f,flag,ans;
    string str;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
    }
    for(i=1;i<=n;i++)
    {
        if(m>=k)
            break;
        m=m+86400-array[i];
        c++;
    }
    cout<<c<<endl;


}
