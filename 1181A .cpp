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
    ll n,m,a,b,array[100000+10],t,i,j,f,sum=0,flag,shasha,masa,coco;
    cin>>shasha>>masa>>coco;
    n=shasha/coco;
    sum=sum+n;
    shasha=shasha%coco;
    m=masa/coco;
    sum=sum+m;
    masa=masa%coco;
    if(masa>shasha)
        f=1;
    else
        f=0;
    ll l=(shasha+masa)%coco;
    sum=sum+(shasha+masa)/coco;
    if(l==0&&f)
         flag=shasha;
    else if(l==0&&f==0)
        flag=masa;
    else if(l!=0&&f==1)
    {
         flag=shasha-l;
    }
    else if(l!=0&&f==0)
    {
         flag=masa-l;
    }
    if(flag<0)
        flag=0;
cout<<sum<<" "<<flag<<endl;


}
