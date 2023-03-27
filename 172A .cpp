#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ar[100000],i,j,cnt=0,a,b,ans;
    string str[30001],ptr;
    vector<long long int>vec;
    char ch;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>str[i];
    a=str[0].length();
   // cout<<a<<endl;
    for(ans=0;ans<a;ans++)
    {
        bool flag=true;
        for(i=1;i<n;i++)
        {
            if(str[i][ans]!=str[i-1][ans])
            {
                flag=false;
                break;
            }
        }
        if(flag==false)
            break;
    }
    cout<<ans<<endl;


}
