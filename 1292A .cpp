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
bool ok[1000001];
ll b_e=0;
ll col[100000+10];
ll forbidden[5][100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,q,k,t;
    cin>>n>>q;
    for(i=1; i<=q; i++)
    {
        ll r,c;
        cin>>r>>c;
        if(forbidden[r][c])
        {
            forbidden[r][c]=!forbidden[r][c];
            if(col[c]==2)
            {
                b_e--;
            }
            col[c]--;
            if(r==2&&forbidden[1][c+1])
            {
                b_e--;
            }
            if(r==2&&forbidden[1][c-1])
            {
                b_e--;
            }
            if(r==1&&forbidden[2][c+1])
            {
                b_e--;
            }
            if(r==1&&forbidden[2][c-1])
            {
                b_e--;
            }
        }
        else
        {
            forbidden[r][c]=!forbidden[r][c];
            col[c]++;
            if(col[c]==2)
            {
                b_e++;
            }
            if(r==2&&forbidden[1][c+1])
            {
                b_e++;
            }
            if(r==2&&forbidden[1][c-1])
            {
                b_e++;
            }
            if(r==1&&forbidden[2][c+1])
            {
                b_e++;
            }
            if(r==1&&forbidden[2][c-1])
            {
                b_e++;
            }
        }
        if(b_e>=1)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }


    return 0;
}


