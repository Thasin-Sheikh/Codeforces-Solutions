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
bool ok[1000];
vector<ll>v[1000];
vector<ll>vcopy[1000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    vector<ll>a,b,c;
    cin>>n;
    ll sum=0;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        a.push_back(m);
        if(i>1)
            b.push_back(m);
        sum+=m;
    }
    if(a[0]==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(sum+1<n)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(b.rbegin(),b.rend());
    reverse(b.begin(),b.end());
    b.push_back(a[0]);
    reverse(b.begin(),b.end());
    vector<ll>cd;
    cd=a;
    ll fp;
    for(i=0; i<b.size(); i++)
    {
        k=b[i];
        if(k)
        {
            for(ll p=0; p<cd.size(); p++)
            {
                if(cd[p]==k)
                {
                    cd[p]=-1;
                    fp=p+1;
                    //cout<<fp<<endl;
                    break;
                }
            }
            for(j=i+1; j<b.size(); j++)
            {
                if(k)
                {
                    for(ll in=1; in<a.size(); in++)
                    {
                        if(a[in]==b[j])
                        {
                            a[in]=-1;
                            c.push_back(fp);
                            c.push_back(in+1);
                            k--;
                            break;
                        }
                    }
                }
                else break;
            }
        }
    }
    cout<<c.size()/2<<endl;
    for(i=0; i<c.size(); i++)
    {
        cout<<c[i];
        if(i%2)
            cout<<endl;
        else cout<<" ";
    }
    return 0;
}


