#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt,cn,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cnt=0,cn=0,c=0,flag=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
            if(array[i]%2==0)
                cnt++;
            else cn++;
        }
        if(n==1&&cn==1)
            cout<<-1<<endl;
        else
        {

            for(i=0; i<n; i++)
            {
                if(array[i]%2==0)
                {
                    cout<<1<<endl;
                    cout<<i+1<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                for(i=0; i<n; i++)
                {

                    sum=sum+array[i];
                    vecc.push_back(i+1);
                    c++;
                    if(sum%2==0)
                    {
                        reverse(vecc.begin(),vecc.end());
                        cout<<c<<endl;
                        while(!vecc.empty())
                        {
                            cout<<vecc.back()<<" ";
                            vecc.pop_back();
                        }
                        break;
                    }
                }
                cout<<endl;
            }
        }
    }
}



