///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,n1,n2;
    cin>>n;
    deque<ll>dq;
    for(i=1; i<=n; i++)
    {
        ll a;
        cin>>a;
        dq.push_back(a);
    }
    ll flag;
    if(dq.front()<dq.back())
    {
        str='L';
        flag=dq.front();
        dq.pop_front();
    }
    else
    {
        str='R';
        flag=dq.back();
        dq.pop_back();
    }
    if(n==1)
    {
        cout<<1<<endl;
        cout<<str<<endl;
        return 0;
    }
    if(n==2)
    {
        if(dq.front()>flag)
        {
            str+='L';
            cout<<2<<endl;
            cout<<str<<endl;
            return 0;
        }
        else
        {
            cout<<1<<endl;
            cout<<str<<endl;
            return 0;
        }
    }
   // cout<<flag<<endl;
    while(dq.size()>1)
    {
        n1=dq.front();
        n2=dq.back();
        if(n1>flag&&n2<flag)
        {
            flag=n1;
            str+='L';
            dq.pop_front();
        }
        else if(n2>flag&&n1<flag)
        {
            flag=n2;
            str+='R';
            dq.pop_back();
        }
        else if(n2>flag&&n1>flag)
        {
            if(n1<n2)
            {
                flag=n1;
                str+='L';
                dq.pop_front();
            }
            else
            {
                flag=n2;
                str+='R';
                dq.pop_back();
            }
        }
        else break;
    }
    if(dq.front()>flag)
    {
        str+='R';
    }
    cout<<str.length()<<endl;
    cout<<str<<endl;

    return 0;
}


