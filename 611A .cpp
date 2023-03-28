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
    string str,ptr;
    char ch;
    ll i=0,j,m,a,b,c,d,n,l,t,s,x,p=0,cnt=0,mn;
    cin>>m;
    cin>>str;
    cin>>ptr;
    ch=ptr[0];
    if(ch=='w')
    {
        if(m<=4||m==7)
            cout<<52<<endl;
        else cout<<53<<endl;

    }
    else
    {
        if(m<=29)
            cout<<12<<endl;
        else if(m<=30)
        {
            cout<<11<<endl;

        }
        else if(m==31)
            cout<<7<<endl;


    }

}
