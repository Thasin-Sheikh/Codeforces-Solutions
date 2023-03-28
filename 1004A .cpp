///*BY The Name Of ALLAH***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,p=0,l=0,array[1000],d;
    cin>>n>>d;
    set<ll>ds;
    for(i=0; i<n; i++)
    {
        cin>>array[i];

    }
    ll cnt;
    cnt=1;
    if(array[0]+d<=array[1]-d)
        cnt++;
    //cout<<cnt<<endl;
    for(i=1; i<n-1; i++)
    {
        ll f=0;
        ll d1=array[i]+d;
        ll d2=array[i+1]-d;
        ll d3=array[i]-d;
        ll d4=array[i-1]+d;
        if(d1<=d2)
        {
            cnt++;
            //cout<<d1<<" "<<d2<<endl;
        }
        if(d3>d4)
        {
            cnt++;
            //  cout<<d3<<" "<<d4<<endl;
        }

    }
    //cout<<cnt<<endl;
    if(n==1){
    cout<<2<<endl;
    return 0;}
    if(array[n-1]-d>array[n-2]+d)
        cnt++;
    cout<<cnt+1<<endl;
}
