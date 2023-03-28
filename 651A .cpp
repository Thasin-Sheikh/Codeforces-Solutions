///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];
ll  solve(ll h)
{
    return h*(3*h+1)/2;
}
int main()
{
    makefast__
    long long int n,t,i,cnt,d=0,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<long long int >s,vec;
    ll a1,a2;
    cin>>a1>>a2;
    if(a1<2&&a2<2)
    {
        cout<<0<<endl;
        return 0;
    }
    while(a1&&a2)
    {
        if(a1>2)
        {
            a1-=2;
            a2+=1;
            d++;
        }
        else if(a2>2)
        {
            a2-=2;
            a1+=1;
            d++;
        }
        else
        {
            if(a2&&a1)
                d++;
            break;
        }


    }
    cout<<d<<endl;

}
