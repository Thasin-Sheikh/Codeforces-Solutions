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
    ll n,m,i,j,ans,array[100000+10],ma,t,two=2,minn=INT_MIN;
    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<n; i++)
    {
        if(m%array[i]==0)
        {
            minn=max(array[i],minn);
        }
    }


        cout<<m/minn<<endl;

}

