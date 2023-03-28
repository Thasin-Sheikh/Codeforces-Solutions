///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
char magic[101][101];
vector<ll>primes;
bool fk[1000001];
ll ccount[2000001];
ll fact(ll n)
{
    int i,j;
    ll fct=1;
    for(i=1; i<=n; i++)
    {
        fct*=i;
    }
    return fct;

}
int main()
{
    makefast__
    string str,ptr;
    ll a,c,d,e,f,x,y,t,A,B,L,j,i,l,r,m,n,C,D,sum=0,sum1=0;
    vector<ll>v,v1,ans,bali;
    queue<ll>qu;
    set<ll>sl;
    map<string,int>ms;
    cin>>n;
    ll first=0,last=0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        aarray[i]=a;
        v.push_back(a);
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    if(v==v1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;

    }
    ll R;
    reverse(v1.begin(),v1.end());
    if(v1==v)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<n<<endl;
        return 0;
    }
    for(i=2; i<=n; i++)
    {
        if(aarray[i]<aarray[i-1])
        {
            L=i-1;
            break;
        }
    }
    for(i=n; i>=1; i--)  // 3 2 1
    {
        if(aarray[i]<aarray[i-1])
        {
            R=i;
            break;
        }
    }
    for(i=1; i<L; i++)
        ans.push_back(aarray[i]);
    vector<ll>lk;
    for(i=L; i<=R; i++)
    {
        lk.push_back(aarray[i]);
    }
    reverse(lk.begin(),lk.end());
    ll k=0;
    for(i=L;i<=R;i++)
    {
        ans.push_back(lk[k]);
        k++;
    }
    for(i=R+1; i<=n; i++)
        ans.push_back(aarray[i]);
        f=1;
 for(i=1;i<ans.size();i++)
 {
     if(ans[i]<ans[i-1])
     {
         f=0;
         break;
     }
 }
 if(f)
 {
     cout<<"yes"<<endl;
     cout<<L<<" "<<R<<endl;
 }
 else
 {
     cout<<"no"<<endl;
 }


}
