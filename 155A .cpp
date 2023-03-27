#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ar[100000+100],i,j,n,m,cnt,cnt1,c=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ar[i];
    for(i=1; i<n; i++)
    {
        cnt=0,cnt1=0;
        for(j=0; j<i; j++)
        {
            if(ar[i]<ar[j])
                cnt++;
            if(ar[i]>ar[j])
                cnt1++;
        }
        //cout<<cnt1<<" "<<cnt<<endl;
        if(cnt==i||cnt1==i)
            c++;
        //cout<<c<<endl;
    }
    cout<<c<<endl;

}
