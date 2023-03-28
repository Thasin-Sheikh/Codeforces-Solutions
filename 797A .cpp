///*Bismillahir Rahmanir Rahim***///
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
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];
void seive()
{
    ll i,j,n;
    for(i=2; i<=100000; i++)
        fk[i]=true;
    fk[0]=fk[1]=false;
    for(i=2; i<=100001; i++)
    {
        if(fk[i])
        {
            for(j=2*i; j<=100001; j+=2)
            {
                fk[j]=false;
            }
            primes.push_back(i);
        }
    }
}
int main()
{
    makefast__
    vector<string>str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A=INT_MAX,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<pair<ll,ll>>v;
    ll l1,r1,l2,r2;
    cin>>n>>k;
    seive();
    for(i=0; i<primes.size(); i++)
    {
        ll cont=0;
        while(n%primes[i]==0)
        {
            {
                n/=primes[i];
                cont++;
            }
        }
        ans+=cont;
        v.push_back(make_pair(primes[i],cont));
        if(n==1)
            break;
    }
    sort(v.begin(),v.end());
    //cout<<v.size()<<endl;
    vector<ll>huang;
    if(ans<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    //  for(auto it=v.begin();it!=v.end();i++)
    //cout<<it->first<<" "<<it->second<<endl;


    for(auto it=v.begin(); it!=v.end(); it++)
    {
        while(it->second>0&&k>1)
        {
            huang.push_back(it->first);
            it->second=it->second-1;
            k--;
        }
        if(k==1)
        {
            break;
        }

    }

    ll pro;
    pro=1;
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if(it->second>0)
        {
            for(i=1; i<=it->second; i++)
            {
                pro*=it->first;
            }
        }

    }
    huang.push_back(pro);
    for(i=0; i<huang.size(); i++)
        cout<<huang[i]<<" ";


}
