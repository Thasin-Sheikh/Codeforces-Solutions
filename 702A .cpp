#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,p,k,cnt=0,mh,res,ans=INT_MIN,b,c,sum=0,ar,alex,array[100000+10],p3,point;
    long long int lfirst,sec,third,mfirst,p2;
    vector<pair<long long int,long long int>>vec;
    vector<long long int>v;
    char ch [101][101];
    string str;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    p=array[0];
    array[n]=0;
    cnt++;
    for(i=1; i<=n; i++)
    {
        if(array[i]>p)
        {
            p=array[i];
            cnt++;
            //cout<<cnt<<" "<<p<<endl;
        }
        else
        {
            v.push_back(cnt);
            p=array[i];
            cnt=0;
            cnt++;
        }
        //cout<<ans<<" ";

    }
sort(v.begin(),v.end());
cout<<v[v.size()-1]<<endl;

}
