///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    makefast__
    string ptr,str,ps;
    char ch,ch1,ch2;
    ll page,v0,a,v1,l,ans=0,c=0,p,flag,op=2;
    cin>>page>>v0>>a>>v1>>l;
    flag=page;
    ans=ans+v0;
    if(ans>=page&&v0<=a)
    {
        cout<<1<<endl;
        return 0;
    }
    else
    {
        p=min(v0,a);
        flag-=p;
        c++;
        ans=ans-p;
        flag+=l;
        ans+=v0+v1;
    }
    //cout<<c<<" "<<flag<<" "<<ans<<endl;
    while(flag>0)
    {
        flag=flag-min(ans,a);
       // cout<<flag<<endl;
        c++;
        if(flag<=0)
            break;
        else
        {
            flag+=l;
            ans=v0+op*v1;
            //cout<<ans<<endl;
            op++;
        }
    }
    cout<<c<<endl;

}
