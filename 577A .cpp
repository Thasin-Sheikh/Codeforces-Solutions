#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,cnt=0,i;
    cin>>n>>x;
    for(i=1; i<=n; i++)
    {
        if(x%i==0&&(x>=i&&x<=i*n))
            cnt++;
    }
    cout<<cnt<<endl;
}
