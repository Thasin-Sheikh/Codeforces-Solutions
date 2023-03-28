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
map<ll,ll>o,tt,th;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a;
    set<ll>one,two,three;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            one.insert(aarray[i]);
            o[aarray[i]]++;
        }
        else if(a==2)
        {
            two.insert(aarray[i]);
            tt[aarray[i]]++;
        }
        else three.insert(aarray[i]),th[aarray[i]]++;
    }
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            one.insert(aarray[i]);
            o[aarray[i]]++;
        }
        else if(a==2)
        {
            two.insert(aarray[i]);
            tt[aarray[i]]++;
        }
        else three.insert(aarray[i]),th[aarray[i]]++;
    }
    cin>>t;
    vector<ll>ans;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        if(a==1)
        {
            if(one.size()==0)
            {
                ans.push_back(-1);
            }
            else
            {
                auto it=one.begin();
                ans.push_back(*it);
                one.erase(*it);
                o[*it]--;
                if(tt[*it])
                {
                    two.erase(*it);
                    tt[*it]--;
                }
                if(th[*it])
                {
                    three.erase(*it);
                    th[*it]--;
                }
            }
        }
        if(a==2)
        {
            if(two.size()==0)
            {
                ans.push_back(-1);
            }
            else
            {
                auto it=two.begin();
                ans.push_back(*it);
                two.erase(*it);
                tt[*it]--;
                if(o[*it])
                {
                    one.erase(*it);
                    o[*it]--;
                }
                if(th[*it])
                {
                    three.erase(*it);
                    th[*it]--;
                }
            }
        }
        if(a==3)
        {
            if(three.size()==0)
            {
                ans.push_back(-1);
            }
            else
            {
                auto it=three.begin();
                ans.push_back(*it);
                three.erase(*it);
                th[*it]--;
                if(o[*it])
                {
                    one.erase(*it);
                    o[*it]--;
                }
                if(tt[*it])
                {
                    two.erase(*it);
                    tt[*it]--;
                }
            }
        }

    }
    for(auto c:ans)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}



