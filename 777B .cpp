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
    string str,s1,s2,s3,s4;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>s1>>s2;
    ll mif=0,maf=0;
    s3=s1;
    s4=s2;
    sort(s2.begin(),s2.end());
    sort(s1.begin(),s1.begin());
    for(i=0;i<s1.length();i++)
    {
        for(j=0;j<s2.length();j++)
        {
            if(s2[j]>=s1[i])
            {
                s2.erase(j,1);
                break;
            }
        }
    }
    mif=s2.size();
    //cout<<mif<<endl;
    //cout<<s3<<" "<<s4<<endl;
    sort(s3.begin(),s3.begin());
    sort(s4.begin(),s4.end());
    for(i=0;i<s4.length();i++)
    {
        for(j=0;j<s3.length();j++)
        {
            if(s3[j]<s4[i])
            {
                s3.erase(j,1);
                break;
            }
        }
    }
    //cout<<s3.size()<<endl;
    maf=n-ll(s3.size());
    cout<<mif<<" "<<maf<<endl;
    return 0;
}


