#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,ans1=0,j,blue,i,red,l,cnt=0,d,y,sum1,b,r,sum,t,ans=0,dif,array[200000+10],f,p=1,minn,a,c,e,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    memset(prime,true,sizeof(prime));
    list<char>ptr;
    string str;
    cin>>n;
    for(i=1; i<=2*n; i++)
    {
        cin>>array[i];
        prime[array[i]]=true;
    }
    for(i=1; i<=2*n; i++)
    {
        if(prime[array[i]]==true)
        {
            cnt++;
            prime[array[i]]=false;
        }
        else
        {
            v.push_back(cnt);
            cnt--;

        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;

}
