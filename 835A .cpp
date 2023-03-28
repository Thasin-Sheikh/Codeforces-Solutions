#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,v1,v2,p,t1,t2,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n>>v1>>v2>>t1>>t2;
    if((n*v1)+(2*t1)<(n*v2)+(2*t2))
        cout<<"First"<<endl;
    else if((n*v1)+(2*t1)>(n*v2)+(2*t2))
        cout<<"Second"<<endl;
    else cout<<"Friendship"<<endl;


    return 0;
}
