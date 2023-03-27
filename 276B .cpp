#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int  main()
{
    string str;
    cin>>str;
    ll count[26],i,j;
    ll cnt=0;
    memset(count,0,sizeof(count));
    for(i=0;i<str.length();i++)
    {
        count[str[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]%2!=0)
            cnt++;
    }
    if(cnt<2||cnt%2!=0)
        cout<<"First"<<endl;
    else cout<<"Second"<<endl;

}
