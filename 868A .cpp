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
    ll n,i,j,p=0,m,after,mark=0,f=0,l=0;
    vector<ll>cv;
    char ch;
    cin>>str;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ptr;
        if(ptr==str)
        {
            cout<<"YES"<<endl;
            exit(0);
        }
            if(ptr[1]==str[0])
                f++;
            if(ptr[0]==str[1])
                l++;


    }
    //cout<<f<<endl;

    if(f>=1&&l>=1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
