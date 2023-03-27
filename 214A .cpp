#include<bits/stdc++.h>
using namespace std;
int  equation(long long int n,long long int m)
{
    long long int count=0,i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            if((i*i+j==n)&&(i+j*j==m))
                count++;
        }
    }
    return count;
}
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,b,r,sum=0,t,ans=INT_MIN,dif,array[100000+10],f,p=1,minn,a,c=0;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    cin>>n>>m;
    cout<<equation(n,m)<<endl;


}
