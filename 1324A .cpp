#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,ar[100000],p,i,j,cnt=0,a,b,ans,array[100000+10],f,c,d;
    string str[30001],ptr;
    vector<long long int>vec;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=1;
        c=0,d=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0)
                c++;
            else d++;
        }
        if(c==n||d==n)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}
