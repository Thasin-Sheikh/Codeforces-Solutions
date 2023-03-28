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
    cin>>n;
    ll f=0,s=0,l1=0,l2=0;
    vector<ll>s1,s2;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]>0)
        {
            f+=aarray[i];
            s1.push_back(aarray[i]);
        }
        else
        {
            s+=abs(aarray[i]);
            s2.push_back(abs(aarray[i]));
        }

    }
    if(f>s)
    {
        cout<<"first"<<endl;
        return 0;
    }
    else if(s>f)
    {
        cout<<"second"<<endl;
        return 0;
    }
    else
    {
        ll ff=0;
        if(s1.size()>s2.size())
        {
            for(i=0; i<s2.size(); i++)
            {
                if(s2[i]!=s1[i])
                {
                    ff=0;
                    break;
                }
            }
            if(ff)

            {
                cout<<"first"<<endl;
                return 0;
            }
        }
        else if(s2.size()>s1.size())
        {
            ll ff=1;
            for(i=0; i<s1.size(); i++)
            {
                if(s1[i]!=s2[i])
                {
                    ff=0;
                    break;
                }
            }
            if(ff)
            {
                cout<<"second"<<endl;
                return 0;
            }
        }

        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]>s2[i])
            {
                cout<<"first"<<endl;
                return 0;
            }
            if(s2[i]>s1[i])
            {
                cout<<"second"<<endl;
                return 0;
            }
        }
    }
    if(aarray[n]>0)
    {
        cout<<"first"<<endl;
    }
    else cout<<"second"<<endl;
return 0;
}


