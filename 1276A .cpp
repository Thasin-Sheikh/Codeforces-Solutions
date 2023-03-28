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
        cin>>str;
        ll len=str.size();
        vector<ll>ans;
        for(i=1;i<str.length()-1;)
        {
            if(str[i]=='n'&&str[i-1]=='o'&&str[i+1]=='e')
            {
                ans.push_back(i+1);
                i+=2;
            }
            else if(str[i]=='w'&&str[i-1]=='t'&&str[i+1]=='o')
            {
                if(str[i+2]=='n'&&str[i+3]=='e')
                {
                    ans.push_back(i+2);
                    i+=3;
                }
                else
                {
                    ans.push_back(i+1);
                    i+=2;
                }
            }
            else i++;
        }
        cout<<ans.size()<<endl;
        for(auto c:ans)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }

    return 0;
}


