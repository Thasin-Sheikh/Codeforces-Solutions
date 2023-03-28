#include<bits/stdc++.h>
using namespace std;
int  a[200001];
void solve ()
{

    int q,n,k,i,j,c,d;
    cin>>n>>k;
    int cnt=0,temp;
    for(j=0; j<n; j++)
    {
        cin>>temp;
        if(temp%2!=0)
        {
            if(cnt<=k)
            {
                a[cnt]=j+1;
            }
            cnt++;
        }
    }
    if(cnt<k)
    {
        cout<<"NO"<<endl;
        return;
    }
    else if((cnt-k+1)%2==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<k-1; i++)
        {
            cout<<a[i]<<" ";
        }
    }cout<<n<<endl;

}
    int main()
    {
        int n;
        cin>>n;
        while(n>0)
        {
            n--;
            solve();
        }
        return 0;
    }
