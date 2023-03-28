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
    string ptr,str,ps;
    char ch,ch1,ch2;
    ll n,flag,op=2,array[100000+10],i,j;
    for(i=1; i<=11; i++)
    {
        array[i]=(pow(2,i)-1)*(pow(2,i-1));
    }
    cin>>n;
    for(i=11; i>=1; i--)
    {
        if(n%array[i]==0)
        {
            cout<<array[i]<<endl;
            return 0;
        }
    }


}
