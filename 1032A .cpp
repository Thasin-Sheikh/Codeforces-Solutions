///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
#include<math.h>
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
    string ptr,str,uni;
    ll n,i,j,p=2,m,after,a,mark,array[101],guest;
    vector<ll>cv;
    set<ll>sc;
    cin>>n>>guest;
    ll count[101];
    memset(count,0,sizeof(count));
    for(i=0;i<n;i++)
    {
        cin>>a;
        sc.insert(a);
        count[a]++;
    }
    sort(count,count+101);
    m=count[100];
    mark=m/guest;
    if(m%guest!=0)
        mark++;
    after=sc.size();
    ll flag;
    flag=after*guest*mark;
    cout<<flag-n<<endl;




}
