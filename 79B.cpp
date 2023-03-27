///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> //required
#include <ext/pb_ds/tree_policy.hpp> //required
using namespace __gnu_pbds; //required
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
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,waste,q,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    set<ll>sl;
    cin>>n>>m>>waste>>q;
    while(waste--)
    {
        cin>>x>>y;
        a=x-1;
        a*=m;
        a+=y;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        cin>>x>>y;
        a=x-1;
        a*=m;
        a+=y;
        l=lower_bound(v.begin(),v.end(),a)-v.begin();
        b=a-l;
        if(v[l]==a)
        {
            cout<<"Waste"<<endl;
        }
        else if(b%3==1)
        {
            cout<<"Carrots"<<endl;
        }
        else if(b%3==2)
        {
            cout<<"Kiwis"<<endl;
        }
        else cout<<"Grapes"<<endl;

    }

}
