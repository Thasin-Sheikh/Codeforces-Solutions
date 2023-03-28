#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,array[100000+10],a,b,cnt=0,cnt1=0,cnt2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            cnt++;
        else if(b>a)
            cnt1++;
        else
            cnt2++;
    }
    if(cnt>cnt1)
        cout<<"Mishka"<<endl;
    else if(cnt1>cnt)
        cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}

