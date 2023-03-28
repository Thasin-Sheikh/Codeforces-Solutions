
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,p,k,f=0,cnt,mh,res,b,c,sum=0,ar,t,alex,array[200000+10],flag[200000+10],p3,point,ans;
    long long int lfirst,sec,third,mfirst,p2;
    vector<pair<long long int,long long int>>vec;
    char ch [101][101];
    string str;
    cin>>t;
    while(t--)
    {
        ans=INT_MIN;
        vector<long long int>v1,v2;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        for(i=0; i<n; i++)
        {
            cnt=0;
            for(j=i+1; j<n; j++)
            {
                if(abs(array[i]-array[j])==1)
                {
                    cnt++;
                }
            }
            ans=max(ans,cnt);
        }
    cout<<ans+1<<endl;
    }
}
