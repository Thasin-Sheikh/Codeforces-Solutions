#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,ans1=0,j,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=0,dif,array[100000+10],f,p=1,minn,a,c,e,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    memset(prime,true,sizeof(prime));
    list<char>ptr;
    string str;
    prime[0]=false;
    prime[1]=false;
    for(i=2; i<=1000001; i++)
    {
        if(prime[i]==true)
        {
            for(j=2; i*j<=1000001; j++)
            {
                prime[i*j]=false;

            }
        }
    }
    cin>>n;
    for(i=1;;i++)
    {
        if(prime[i*n+1]==false)
        {
            cout<<i<<endl;
            return 0;
        }
    }

}
