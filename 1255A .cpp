#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>a>>b;
        n=abs(a-b);
        //cout<<n<<" ";
        cnt=cnt+(n/5);
        n=n%5;
        //1cout<<n<<endl;
        cnt=cnt+(n/2);;
        n=n%2;
        cnt=cnt+n;
        cout<<cnt<<endl;

    }


    return 0;
}

