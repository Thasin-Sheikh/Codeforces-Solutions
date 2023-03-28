#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,i,j,ar[100000],f,f2,a,b,c;
    cin>>a>>b>>c;
    f=min(a,min(b,c));
    f2=max(a,max(b,c));
    cout<<f2-f<<endl;

}
