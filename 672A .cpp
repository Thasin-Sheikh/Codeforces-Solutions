#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>n;
    for(i=370;i>=10;i--)
    {
        p=i;
        while(p>0)
        {
            m=p%10;
            vi.push_back(m);
            p=p/10;
        }
    }
    reverse(vi.begin(),vi.end());
    if(n<=9)
        cout<<n<<endl;
    else cout<<vi[n-10]<<endl;


    return 0;
}

