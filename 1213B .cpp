#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a,i,j,m,n,minn;
    cin>>n;
    while(n--)
    {
        cin>>m;
        int cnt=0;
        for(i=0; i<m; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        minn=v[m-1];
        for(i=m-2; i>=0; i--)
        {
            if(v[i]>minn)
            {
                cnt++;
            }
            minn=min(v[i],minn);
        }
        cout<<cnt<<endl;
        v.clear();
    }
}
