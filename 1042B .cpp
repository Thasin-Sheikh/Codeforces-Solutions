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
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>A,B,C,ABC,AB,AC,BC;
    for(i=1; i<=n; i++)
    {
        cin>>k>>str;
        if(str=="A")
            A.push_back(k);
        else if(str=="B")
            B.push_back(k);
        else if(str=="C")
            C.push_back(k);
        else if(str=="AB"||str=="BA")
            AB.push_back(k);
        else if(str=="AC"||str=="CA")
            AC.push_back(k);
        else if(str=="BC"||str=="CB")
            BC.push_back(k);
        else ABC.push_back(k);

    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    sort(ABC.begin(),ABC.end());
    sort(AB.begin(),AB.end());
    sort(AC.begin(),AC.end());
    sort(BC.begin(),BC.end());
    ll a=INT_MAX,b=INT_MAX,c=INT_MAX,d=INT_MAX,e=INT_MAX,f=INT_MAX,g=INT_MAX,h=INT_MAX,I=INT_MAX;
    if(BC.size()>0&&A.size()>0)
    {
        a=BC[0]+A[0];
    }
    if(AC.size()>0&&B.size()>0)
    {
        b=AC[0]+B[0];
    }
    if(AB.size()>0&&C.size()>0)
    {
        c=AB[0]+C[0];
    }
    if(A.size()>0&&B.size()>0&&C.size()>0)
    {
        d=A[0]+B[0]+C[0];
    }
    if(ABC.size()>0)
    {
        e=ABC[0];
    }
    if(AB.size()>0&&AC.size()>0)
    {
        f=AB[0]+AC[0];
    }
    if(AB.size()>0&&BC.size()>0)
    {
        g=AB[0]+BC[0];
    }
    if(BC.size()>0&&AC.size()>0)
    {
        h=BC[0]+AC[0];
    }


    ll ans=min(a,min(b,min(c,min(d,min(e,min(f,min(g,h)))))));
    if(ans==INT_MAX)
        cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}


