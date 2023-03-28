#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,d,k,m,i,j,p,t,array[100000+10],ar[100000],q,sum1=0,ans,cnt=0,sum=INT_MIN,ans2;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        ans=(a/c);
        ans2=(b/d);
        if(a%c!=0)
            ans++;
        if(b%d!=0)
            ans2++;
        if(ans+ans2>k)
            cout<<-1<<endl;
        else cout<<ans<<" "<<ans2<<endl;
    }


    return 0;
}

