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
vector<ll>A,B;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll asum=0,bsum=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        A.push_back(k);
    }
    for(i=0; i<n; i++)
    {
        cin>>k;
        B.push_back(k);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    ll c=1;
    t=2*n;
    while(t--)
    {
        if(c%2)
        {
            if(A.size()>0)
            {
                if(B.size()>0)
                {
                    if(A[A.size()-1]>B[B.size()-1])
                    {
                        asum+=A[A.size()-1];
                        A.pop_back();
                    }
                    else
                    {
                        B.pop_back();
                    }
                }
                else
                {
                    asum+=A[A.size()-1];
                    A.pop_back();
                }
            }
            else
            {
                B.pop_back();
            }
            c++;
        }
        else
        {
            if(B.size()>0)
            {
                if(A.size()>0)
                {
                    if(B[B.size()-1]>A[A.size()-1])
                    {
                        bsum+=B[B.size()-1];
                        B.pop_back();
                    }
                    else
                    {
                        A.pop_back();
                    }
                }
                else
                {
                    bsum+=B[B.size()-1];
                    B.pop_back();
                }
            }
            else
            {
                A.pop_back();
            }
            c++;
        }
    }
    //cout<<asum<<" "<<bsum<<endl;
    cout<<asum-bsum<<endl;
    return 0;
}


