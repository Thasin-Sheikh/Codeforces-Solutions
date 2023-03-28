#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,k,j,array[100000],c=0,d=0,e,f,flag,ans;
    string str;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            c++;
        else d++;
    }
    e=min(c,d);
    c=c-e;
    d=d-e;
    f=c/3;
    ans=e+f;
    cout<<ans<<endl;


}
