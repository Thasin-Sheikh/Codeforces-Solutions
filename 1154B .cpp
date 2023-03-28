/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll time,bus,a,b,n,i,m,s,t,array[100000+10];
    cin>>n;
    set<ll>gl,fl;
    vector<ll>distance,last;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        gl.insert(array[i]);
    }
    for(auto it=gl.begin();it!=gl.end();it++)
    {
        distance.push_back(*it);
    }
    if(distance.size()>3)
    {
        cout<<-1<<endl;
        return 0;

    }

    else if(distance.size()==3)
    {
        a=distance[2];
        b=distance[1];
        ll c=distance[0];
        if(a-b==b-c)
            cout<<a-b<<endl;
        else cout<<-1<<endl;

    }
    else if(distance.size()==2)
    {
        b=distance[1];
        ll c=distance[0];
        if((b-c)%2==0)
            cout<<(b-c)/2<<endl;
        else cout<<b-c<<endl;

    }
    else if(distance.size()==1)
        cout<<0<<endl;

}
