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
    string str,s1,s2,s3;
    ll i,j,n,k,t;
    cin>>s1>>s2>>s3;
    set<string>ss;
    ss.insert(s1);
    ss.insert(s2);
    ss.insert(s3);
    if(ss.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    vector<string>vs;
    vs.push_back(s1);
    vs.push_back(s2);
    vs.push_back(s3);
    sort(vs.begin(),vs.end());
    s1=vs[0],s2=vs[1],s3=vs[2];
    //cout<<s1<<" "<<s2<<" "<<s3<<endl;
    if(s1[1]==s2[1]&&s1[1]==s3[1])
    {
        ll a1,a2,a3;
        a1=s1[0]-'0',a2=s2[0]-'0',a3=s3[0]-'0';
        if(a1+1==a2&&a2+1==a3)
        {
            cout<<0<<endl;
            return 0;
        }
        if(a1+1==a2||a2+1==a1||a1+1==a3||a3+1==a1||a2+1==a3||a3+1==a2||a1+2==a2||a2+2==a1||a1+2==a3||a3+2==a1||a2+2==a3||a3+2==a2||a1==a2||a1==a3||a2==a3)
        {
            cout<<1<<endl;
            return 0;
        }
        else cout<<2<<endl;
        return 0;
    }
    else
    {
        if(s1[1]==s2[1])
        {
            ll a1,a2,a3;
            a1=s1[0]-'0',a2=s2[0]-'0';
            if(a1+1==a2||a2+1==a1||a1+2==a2||a2+2==a1||a1==a2)
            {
                cout<<1<<endl;
                return 0;
            }
            else cout<<2<<endl;
            return 0;
        }
        else if(s1[1]==s3[1])
        {
            ll a1,a2,a3;
            a1=s1[0]-'0',a2=s2[0]-'0',a3=s3[0]-'0';
            if(a1+1==a3||a1+2==a3||a3+1==a1||a3+2==a1||a1==a3)
            {
                cout<<1<<endl;
            }
            else cout<<2<<endl;
            return 0;
        }
        else if(s2[1]==s3[1])
        {
            ll a1,a2,a3;
            a1=s1[0]-'0',a2=s2[0]-'0',a3=s3[0]-'0';
            if(a2+1==a3||a2+2==a3||a3+1==a2||a3+2==a2||a2==a3)
            {
                cout<<1<<endl;
            }
            else cout<<2<<endl;
            return 0;

        }
    }
    cout<<2<<endl;

    return 0;
}


