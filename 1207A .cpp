#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,t,to_bun,to_bef,to_ckn,h_price,c_price,maxh,maxc,maxn,maxm,maxp,mo;
    long long int st,ct,qt;
    string str,ptr,sp[5000],p;
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        maxh=0;
        cin>>to_bun>>to_bef>>to_ckn;
        cin>>h_price>>c_price;
        maxp=max(h_price,c_price);
        if(maxp==h_price)
        {
            m=min(to_bun/2,to_bef);
            to_bun=to_bun-m*2;
            maxh=m*h_price;
            mo=min(to_bun/2,to_ckn);
            maxh=maxh+mo*c_price;
            cout<<maxh<<endl;

        }
        else
        {
            m=min(to_bun/2,to_ckn);
            to_bun=to_bun-m*2;
            maxh=m*c_price;
            mo=min(to_bun/2,to_bef);
            maxh=maxh+mo*h_price;
            cout<<maxh<<endl;

        }


    }


}
