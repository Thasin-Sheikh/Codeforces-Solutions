///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
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
ll aarray[N];
char magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,col,row;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            if(magic[i][j]=='X')
            {
                ll x=0,c=0;
                for(k=j; k<=10; k++)
                {
                    if(magic[i][k]=='X'&&c==0)
                    {
                        x++;
                        if(x>=5)
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                    }
                    else if(c==0)
                    {
                        if(magic[i][k]=='.')
                        {
                            c++;
                            if(x>=4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else break;
                    }
                    else
                    {
                        if(magic[i][k]=='X')
                        {
                            x++;
                            if(x>=5)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else
                        {
                            if(x>=5||(c&&x==4))
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            else break;
                        }
                    }
                }
                c=0,x=0;
                 for(k=j; k>=1; k--)
                {
                    if(magic[i][k]=='X'&&c==0)
                    {
                        x++;
                        if(x>=5)
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                    }
                    else if(c==0)
                    {
                        if(magic[i][k]=='.')
                        {
                            c++;
                            if(x>=4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else break;
                    }
                    else
                    {
                        if(magic[i][k]=='X')
                        {
                            x++;
                            if(x>=5)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else
                        {
                            if(x>=5||(c&&x==4))
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            else break;
                        }
                    }
                }
                x=0,c=0;
                for(k=i; k<=10; k++)
                {
                    if(magic[k][j]=='X'&&c==0)
                    {
                        x++;
                        if(x>=5)
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                    }
                    else if(c==0)
                    {
                        if(magic[k][j]=='.')
                        {
                            if(x>=4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            c++;
                        }
                        else break;


                    }
                    else
                    {
                        if(magic[k][j]=='X')
                        {
                            x++;
                            if(x>=5)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else if(x>=5||(x==4&&c))
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                        else break;
                    }
                }
                x=0,c=0;
                for(k=i; k>=1; k--)
                {
                    if(magic[k][j]=='X'&&c==0)
                    {
                        x++;
                        if(x>=5)
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                    }
                    else if(c==0)
                    {
                        if(magic[k][j]=='.')
                        {
                            if(x>=4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            c++;
                        }
                        else break;


                    }
                    else
                    {
                        if(magic[k][j]=='X')
                        {
                            x++;
                            if(x>=5)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else if(x>=5||(x==4&&c))
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                        else break;
                    }
                }
                x=0,c=0;
                ll p=j;
                for(k=i; k<=10&&p>=1; k++)
                {
                    if(magic[k][p]=='X'&&c==0)
                    {
                        x++;
                    }
                    else if(c==0)
                    {
                        if(magic[k][p]=='.')
                        {
                            c++;
                            if(x>=4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else break;
                    }
                    else
                    {
                        if(magic[k][p]=='X')
                        {
                            x++;
                            if(x>=5)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            if(x==4&&c)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else if(x>=5||(x==4&&c))
                        {
                            cout<<"YES"<<"\n";
                            return ;
                        }
                        else break;
                    }
                    p--;
                }
                x=0,c=0;
                p=j;
                for(k=i; k<=10&&p<=10; k++)
                {
                    if(magic[k][p]=='X'&&c==0)
                    {
                        x++;
                    }
                    else if(c==0)
                    {
                        if(magic[k][p]=='.')
                        {
                            if(x>=4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            c++;
                        }
                        else break;
                    }
                    else
                    {
                        if(magic[k][p]=='X')
                        {
                            x++;
                            if(x>=5)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            if(x==4&&c)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else
                        {
                            if(x>=5||(x==4&&c))
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                            else break;
                        }
                    }
                    p++;
                }
                p=j,x=0,c=0;
                for(k=i;k>=1&&p<=10;k--)
                {
                    if(magic[k][p]=='X'&&c==0)
                    {
                        x++;
                    }
                    else if(c==0)
                    {
                        if(magic[k][p]=='.')
                        {
                            c++;
                            if(x==4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else break;
                    }
                    else
                    {
                        if(magic[k][p]=='X')
                        {
                            x++;
                            if(x>=5||(x==4&&c))
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    p++;
                }
                 p=j,x=0,c=0;
                for(k=i;k>=1&&p>=1;k--)
                {
                    if(magic[k][p]=='X'&&c==0)
                    {
                        x++;
                    }
                    else if(c==0)
                    {
                        if(magic[k][p]=='.')
                        {
                            c++;
                            if(x==4)
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else break;
                    }
                    else
                    {
                        if(magic[k][p]=='X')
                        {
                            x++;
                            if(x>=5||(x==4&&c))
                            {
                                cout<<"YES"<<"\n";
                                return ;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    p--;
                }
            }
        }
    }
    cout<<"NO"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


