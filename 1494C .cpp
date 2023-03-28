///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
const long long  maxval=1e18;
const long long minval=-1e18;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll negf[N],posf[N];
vector<ll>negn,negm,posn,posm;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    cin>>n>>m;
    negn.clear();
    negm.clear();
    posn.clear();
    posm.clear();
    for(i=1; i<=n; i++)
    {
        cin>>l;
        if(l<0)
        {
            negn.push_back(abs(l));
        }
        else
        {
            posn.push_back(l);
        }
    }
    posf[0]=negf[0]=0;
    for(i=1; i<=m; i++)
    {
        posf[i]=negf[i]=0;
        cin>>l;
        if(l<0)
        {
            negm.push_back(abs(l));
        }
        else
        {
            posm.push_back(l);
        }
    }
    posf[(ll)posm.size()]=0;
    for(i=ll(posm.size())-1; i>=0; i--)
    {
        if(i==(ll)posm.size()-1)
        {
            l=lower_bound(posn.begin(),posn.end(),posm[i])-posn.begin();
            if(l<posn.size()&&posn[l]==posm[i])
            {
                posf[i]=1;
            }
            else posf[i]=0;
        }
        else
        {
            l=lower_bound(posn.begin(),posn.end(),posm[i])-posn.begin();
            if(l<posn.size()&&posn[l]==posm[i])
            {
                posf[i]=1+posf[i+1];
            }
            else posf[i]=posf[i+1];

        }
    }
    sort(negm.begin(),negm.end());
    sort(negn.begin(),negn.end());
    negf[(ll)negm.size()]=0;
    ll to=0;
    for(i=ll(negm.size())-1; i>=0; i--)
    {
        if(i==(ll)negm.size()-1)
        {
            l=lower_bound(negn.begin(),negn.end(),negm[i])-negn.begin();
            if(l<negn.size()&&negn[l]==negm[i])
            {
                to++;
                negf[i]=1;
            }
            else negf[i]=0;
        }
        else
        {
            l=lower_bound(negn.begin(),negn.end(),negm[i])-negn.begin();
            if(l<negn.size()&&negn[l]==negm[i])
            {
                to++;
                negf[i]=1+negf[i+1];
            }
            else negf[i]=negf[i+1];

        }
    }
    ans=0;
    if(posn.size())
    {
        for(i=0; i<posm.size(); i++)
        {
            k=posm[i];
            l=upper_bound(posn.begin(),posn.end(),k)-posn.begin();
            p=k-l+1;
            r=lower_bound(posm.begin(),posm.end(),p)-posm.begin();
            ll cur=min(i-r+1,l);
            if(cur==0)
            {
                if(posf[i]==(posf[i+1]+1))
                {
                    cur++;
                }
            }
            ans=max(ans,cur+posf[i+1]);
        }
    }
    sum=0;
    if(negn.size())
    {
        for(i=0; i<negm.size(); i++)
        {
            k=negm[i];
            l=upper_bound(negn.begin(),negn.end(),k)-negn.begin();
            p=k-l+1;
            r=lower_bound(negm.begin(),negm.end(),p)-negm.begin();
            ll cur=min(i-r+1,l);
            if(cur==0)
            {
                if(negf[i]==(negf[i+1]+1))
                {
                    cur++;
                }
            }
            sum=max(sum,cur+negf[i+1]);
        }
    }
    ans+=sum;
    ans=max(ans,to);
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    //never use pow func directly
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

