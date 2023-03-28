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
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];
void solve()
{
    ll n,i,j,A=0,B=0,sum=0,C=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
    }
    ll alice=0,bob=0;
    ll cnt=1;
    ll sum1=sum;
    while(1)
    {
        if(cnt%2!=0)
        {
            ll al=0;
            ll flag=1;
            for(i=1; i<=n; i++)
            {
                al+=aarray[i];
                aarray[i]=0;
                if(al>bob)
                {
                    C++;
                    A+=al;
                    alice=al;
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                ll kk;
                kk=sum-(A+B);
                cout<<C+1<<" "<<A+kk<<" "<<B<<endl;
                return ;
            }
            cnt++;
        }
        else
        {
            ll bo=0;
            ll fl=1;
            for(j=n; j>=1; j--)
            {
                bo+=aarray[j];
                aarray[j]=0;
                if(bo>alice)
                {
                    C++;
                    B+=bo;
                    bob=bo;
                    fl=0;
                    break;
                }

            }
            sum1-=bo;
            if(fl)
            {
                ll kk=sum-(A+B);
                cout<<C+1<<" "<<A<<" "<<B+kk<<endl;
                return ;
            }
            cnt++;
        }
        //cout<<A+B<<endl;
        if(A+B==sum)
        {
            cout<<C<<" "<<A<<" "<<B<<endl;
            return ;

        }
    }

}
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
