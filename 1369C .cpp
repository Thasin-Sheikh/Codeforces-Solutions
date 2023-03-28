///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
//ll aarray[200000+10];
/*void solve()
{
    ll i,j,n,a,m,sum=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        aarray.push_back(a);
    }
    sort(aarray.begin(),aarray.end());
    reverse(aarray.begin(),aarray.end());
    for(i=0; i<m; i++)
    {
        cin>>friends[i];
    }
    sort(friends,friends+m);
    for(i=0; i<m; i++)
    {
        ans[i].push_back(aarray[i]);
        friends[i]--;
    }
    j=m;
    for(i=0; i<m; i++)
    {
        ll num=friends[i];
        while(num)
        {
            ans[i].push_back(aarray[j]);
            j++;
            num--;
        }
    }
    for(i=0; i<m; i++)
    {
        ll mn,mx;
        mn=*min_element(ans[i].begin(),ans[i].end());
        mx=*max_element(ans[i].begin(),ans[i].end());
        cout<<mn<<" "<<mx<<endl;
        sum+=mn+mx;
    }
    cout<<sum<<endl;
    aarray.clear();



}*/
vector<ll>ans[200000+10];
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
       sum=0;
      ll friends[200000+10];
      vector<ll>aarray;
      memset(ans,0,sizeof(ans));
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            aarray.push_back(a);
        }
        sort(aarray.begin(),aarray.end());
        reverse(aarray.begin(),aarray.end());
        for(i=0; i<m; i++)
        {
            cin>>friends[i];
        }
        sort(friends,friends+m);
        for(i=0; i<m; i++)
        {
            ans[i].push_back(aarray[i]);
            friends[i]--;
        }
        j=m;
        for(i=0; i<m; i++)
        {
            ll num=friends[i];
            while(num)
            {
                ans[i].push_back(aarray[j]);
                j++;
                num--;
            }
        }
        for(i=0; i<m; i++)
        {
            ll mn,mx;
            mn=*min_element(ans[i].begin(),ans[i].end());
            mx=*max_element(ans[i].begin(),ans[i].end());
            //cout<<mn<<" "<<mx<<endl;
            sum+=mn+mx;
        }
        cout<<sum<<endl;
    }

    return 0;
}
