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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        string ans,bal,pre,pro,rabe;
        ans=str;
        ll dhur;
        string flag(str.size(),'z');
        //cout<<flag<<endl;
        for(i=0;i<str.length();i++)
        {
            ans.erase(0,1);
            bal=str[i];
            pro=str.substr(0,i);
            bal+=ans;
            if((i+1)%2==(n%2))
            reverse(pro.begin(),pro.end());
            bal+=pro;
            if(bal<flag)
            {

                flag=bal;
                dhur=i+1;
            }
            //cout<<bal<<endl;
        }
        cout<<flag<<endl;
        cout<<dhur<<endl;
    }


    return 0;
}


