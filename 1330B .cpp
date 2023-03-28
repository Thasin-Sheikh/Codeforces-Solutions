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
        ll MaxNum=0;
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
            MaxNum=max(MaxNum,aarray[i]);
        }
        ll m1=0,m2=INT_MAX;
        set<ll>s1,s2;
        ll l1,l2;
        l1=MaxNum;
        l2=n-MaxNum;
        for(i=1; i<=l2; i++)
        {
            s1.insert(aarray[i]);
        }
        ll k4=1,k2=1,k3=1;
        k=1;
        for(auto it=s1.begin(); it!=s1.end(); it++)
        {
            if(k!=*it)
            {
                break;
            }
            else
                k++;
        }
        k--;
        s1.clear();
        for(i=l2+1; i<=n; i++)
        {
            s1.insert(aarray[i]);
        }
        for(auto it=s1.begin(); it!=s1.end(); it++)
        {
            if(k2!=*it)
            {
                break;
            }
            else
                k2++;
        }
        k2--;
        vector<pair<ll,ll>>ans;
        s1.clear();
        if(k2==l1&&k==l2)
        {
            ans.push_back(make_pair(l2,l1));
        }
        for(i=1; i<=l1; i++)
        {
            s1.insert(aarray[i]);
        }
        k2=1,k=1;
        for(auto it=s1.begin(); it!=s1.end(); it++)
        {
            if(k2!=*it)
            {
                break;
            }
            else
                k2++;
        }
        k2--;
        s1.clear();
        for(i=l1+1; i<=n; i++)
        {
            s1.insert(aarray[i]);
        }
        for(auto it=s1.begin(); it!=s1.end(); it++)
        {
            if(k!=*it)
            {
                break;
            }
            else
                k++;
        }
        k--;
        if(k==l2&&k2==l1)
        {
            ans.push_back(make_pair(l1,l2));
        }
        //cout<<ans.size()<<endl;
        map<pair<ll,ll>,ll>mm;
        vector<pair<ll,ll>>aa;
        for(auto it=ans.begin(); it!=ans.end(); it++)
        {
            if(mm[make_pair(it->first,it->second)])
            {
                continue;
            }
            else
            {
                aa.push_back(make_pair(it->first,it->second));

                mm[make_pair(it->first,it->second)]++;
            }
        }
        cout<<aa.size()<<endl;
        for(auto it=aa.begin(); it!=aa.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }

    return 0;
}
