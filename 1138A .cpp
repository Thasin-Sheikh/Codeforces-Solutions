#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag=0,cnt1=0,cnt2=0,ans=0,ar[100000],x,y;
    int i;
    string str;
    vector<long long int>v;
    set<string>s;
    queue<long long int>qu;
    set<string>::iterator it;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ar[i];
    ar[n]=0;
    po=ar[0];
    cnt1++;
    for(i=1; i<=n; i++)
    {
        if(ar[i]==po)
        {
            cnt1++;

        }
        else
        {
            //cout<<cnt1<<endl;
            qu.push(cnt1);
            cnt1=0;
            cnt1++;
            po=ar[i];
            cnt2++;


        }
        if(cnt2==2)
        {
            cnt2=0;
            x=qu.front();
            //cout<<x<<endl;
            qu.pop();
            y=qu.front();
            //cout<<y<<endl;
            qu.pop();
            cnt2++;
            qu.push(y);
            v.push_back(min(x,y));

        }

    }
      sort(v.begin(),v.end());
      cout<<2*v[v.size()-1]<<endl;


}
