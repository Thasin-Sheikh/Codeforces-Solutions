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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
map<ll,ll>p,n,nc,pc;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,c,k,t,ans;
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>str;
        ans=0,c=0;
        for(j=0; j<str.length(); j++)
        {
            if(str[j]=='(')
            {
                c++;
            }
            else
                c--;
            if(c<0)
            {
                c=0;
                ans++;
            }
        }
        if(ans>0&&c>0)
        {
            n[i]=ans;
            p[i]=c;
        }
        else if(ans)
        {
            n[i]=ans;
            nc[ans]++;
        }
        else if(c)
        {
            p[i]=c;
            pc[c]++;
        }
        else
        {
            n[i]=p[i]=0;
        }
    }
    ll thik=0,tot=0;
    for(i=1; i<=m; i++)
    {
        if(n[i]==0&&p[i]==0)
        {
            thik++;
            continue;
        }
        else if(n[i]>0&&p[i]>0)
        {
            continue;
        }
        else if(n[i]>0)
        {
            ll num=n[i];
            if(pc[num]>0&&nc[num]>0)
            {
                pc[num]--;
                nc[num]--;
                tot++;
            }
        }
        else if(p[i]>0)
        {
            ll num=p[i];
            if(nc[num]>0&&pc[num]>0)
            {
                nc[num]--;
                pc[num]--;
                tot++;
            }
        }
    }
    cout<<thik/2+tot<<endl;
    return 0;
}



