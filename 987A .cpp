
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string s;
    set<pair<string,string>>sp;
    set<string>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    sp.insert(make_pair("purple","Power"));
    sp.insert(make_pair("green","Time"));
    sp.insert(make_pair("blue","Space"));
    sp.insert(make_pair("orange","Soul"));
    sp.insert(make_pair("red","Reality"));
    sp.insert(make_pair("yellow","Mind"));
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        vecs.insert(s);
    }
    cout<<6-vecs.size()<<endl;
    for(auto it=sp.begin(); it!=sp.end(); it++)
    {
        if(vecs.find(it->first)==vecs.end())
            cout<<it->second<<endl;
    }
}
