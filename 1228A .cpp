#include<bits/stdc++.h>
using namespace std;
int arra[100];
int digit(int x)
{
    int y,z=x;
    while(z>0)
    {
        y=z%10;
        z=z/10;
        if(arra[y]==x)
        {
            return 0;
        }
        arra[y]=x;
    }
    return 1;
}
int main()
{
    int a,b,i,j,m,n,x,y;
    cin>>x>>y;
    for(i=x; i<=y; i++)
    {
        if(digit(i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

}
