#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,m,array[100000+10],k,t,dif;
    cin>>n>>k>>t;
    if(t<n)
    {
        cout<<min(t,k)<<endl;
        return 0;
    }
    dif=(n+k)-t;
    cout<<dif<<endl;

}
