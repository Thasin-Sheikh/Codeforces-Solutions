#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=1,j,cnt,t,ans,flag=1,x,d,sum=0,dif,dp[100][100],f;
    string s[5]= {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    //cout<<s[1]<<endl;
    cin>>n;
    while(1)
    {
        //cout<<n<<endl;
        for(j=0; j<5; j++)
        {
            if(n>i)
                n=n-i;
            else
            {
                cout<<s[j]<<endl;
                return 0;
            }

        }
        i=i*2;
        // j++;
        //out<<j<<endl;

    }
}
