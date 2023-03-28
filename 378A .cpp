///*Bismillahir Rahmanir Rahim***///
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
    makefast__
    string ptr,str,ps,ans;
    char ch,ch1,ch2;
    ll n,m,a,j,k=1,i,b=0,p,bowl,plate,n1,n2,m1,m2,anm,anh;
    cin>>n1;
    cin>>ch1;
    cin>>m1;
    cin>>n2;
    cin>>ch2;
    cin>>m2;
    anh=n1-n2;
    anm=m1-m2;
    if(anm<0)
    {
        anh--;
        anm+=60;
    }
    if(anh<0)
        anh+=24;
    if(anh<=9)
    {
        cout<<0<<anh<<":";
    }
    else
        cout<<anh<<":";
    if(anm<=9)
    {
        cout<<0<<anm<<endl;
    }
    else
        cout<<anm<<endl;




}
