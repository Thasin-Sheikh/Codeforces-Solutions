/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll n,m,i,j,ans,array[10][10],ma,t,two=2,minn=INT_MIN;
    memset(array,0,sizeof(array));
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>array[i][j];
        }
    }
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            int x;
            x=array[i][j]+array[i-1][j]+array[i][j-1]+array[i][j+1]+array[i+1][j];
            if(x%2==0)
                cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }




}
