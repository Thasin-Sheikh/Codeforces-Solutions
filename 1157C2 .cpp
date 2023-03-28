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
    deque<ll>dq,dq2;
    for(i=1; i<=n; i++)
    {
        ll a;
        cin>>a;
        dq.push_back(a);
        dq2.push_back(a);
    }
    ll flag,flag2;
    if(dq.front()<dq.back())
    {
        str='L';
        flag=dq.front();
        dq.pop_front();
    }
    else if(dq.front()>dq.back())
    {
        str='R';
        flag=dq.back();
        dq.pop_back();
    }
    else
    {
        str='L';
        flag=dq.front();
        dq.pop_front();
    }
    //cout<<str<<endl;
    while(dq.size()>1)
    {
        n1=dq.front();
        n2=dq.back();
        if(flag==n1&&flag==n2)
            break;
        if(n1>flag&&n2<=flag)
        {
            flag=n1;
            str+='L';
            dq.pop_front();
        }
        else if(n2>flag&&n1<=flag)
        {
            flag=n2;
            str+='R';
            dq.pop_back();
        }
        else if(n2>flag&&n1>flag&&n1!=n2)
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
        else if(n2>flag&&n1>flag&&n1==n2)
        {
            str+='L';
            flag=n1;
            dq.pop_front();
        }
        else break;
    }
    //cout<<str<<endl;
    if(dq.front()>flag)
    {
        str+='R';
    }
    string ans;
    if(dq2.front()<dq2.back())
    {
        ans='L';
        flag2=dq2.front();
        dq2.pop_front();
    }
    else if(dq2.front()>dq2.back())
    {
        ans='R';
        flag2=dq2.back();
        dq2.pop_back();
    }
    else
    {
        ans='R';
        flag2=dq2.back();
        dq2.pop_back();
    }
    while(dq2.size()>1)
    {
        n1=dq2.front();
        n2=dq2.back();
        if(flag2==n1&&flag2==n2)
        {
            break;
        }
        if(n1>flag2&&n2<=flag2)
        {
            ans+='L';
            flag2=n1;
            dq2.pop_front();
        }
        else if(n2>flag2&&n1<=flag2)
        {
            ans+='R';
            flag2=n2;
            dq2.pop_back();
        }
        else if(n1>flag2&&n2>flag2&&n1!=n2)
        {
            if(n1<n2)
            {
                flag2=n1;
                ans+='L';
                dq2.pop_front();
            }
            else
            {
                flag2=n2;
                ans+='R';
                dq2.pop_back();
            }
        }
        else if(n1>flag2&&n2>flag2&&n1==n2)
        {
            ans+='R';
            flag2=n2;
            dq2.pop_back();
        }
        else break;
    }
    if(dq2.front()>flag2)
    {
        ans+='R';
    }
    //cout<<str<<" "<<ans<<endl;
    if(ans.length()>str.length())
    {
        cout<<ans.length()<<endl;
        cout<<ans<<endl;
    }
    else
    {
        cout<<str.length()<<endl;
        cout<<str<<endl;
    }
    //cout<<str<<" "<<ans<<endl;
}


