/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    dl a,b,n,sum=0;
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        sum+=i;
    cout<<setprecision(15)<<sum/n<<endl;

}
