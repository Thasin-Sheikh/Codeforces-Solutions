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
bool prime[1000001];
int main()
{
    makefast__
    string str;
    dl a,b,c,d,e,f1,f2,y1,y2,x1,x2,r1,r2,t,A,B,L,R,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<pair<ll,ll>>v;
    vector<ll>ans;
    queue<ll>qu;
    dl side,exis[10000],length[10000],k=0;
    cin>>n>>side;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    ll count=0;
    for(auto it=v.begin(); it!=v.end()-1; it++)
    {
        auto jt=it;
        jt++;
        x1=it->first;
        y1=it->second;
        r1=y1/2;
        f1=x1+r1;
        x2=jt->first;
        y2=jt->second;
        r2=y2/2;
        f2=x2-r2;
        A=f2-f1;
            if(A>side)
                C+=2;
            else if(A==side)
                C+=1;
            //cout<<C<<endl;

    }
    cout<<C+2<<endl;


    return 0;
}
