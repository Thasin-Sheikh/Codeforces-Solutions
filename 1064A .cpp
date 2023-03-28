
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>a>>b>>c;
    array[0]=a;
    array[1]=b;
    array[2]=c;
    sort(array,array+3);
    if(array[0]+array[1]>array[2])
        cout<<0<<endl;
    else cout<<(array[2]-(array[0]+array[1]))+1<<endl;

    return 0;
}
