///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    deque<char>dq;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(dq.size()==0)
        {
            dq.push_back(str[i]);
            continue;
        }
        else
        {
            char ch=dq.back();
            if(ch==str[i])
            {
                dq.pop_back();
            }
            else
                dq.push_back(str[i]);
        }
    }
    while(!dq.empty())
    {
        cout<<dq.front();
        dq.pop_front();
    }
    cout<<endl;
    return 0;
}



