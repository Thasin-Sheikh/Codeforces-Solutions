///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,x1,x2,x3,x4,y1,y2,y3,y4,dif1,dif2,dif3,dif4;
    cin>>x1>>y1>>x2>>y2;
    if(y1==y2)
    {
        x3=x1;
        y3=y1+(x2-x1);
        x4=x2;
        y4=y2+(x2-x1);
        dif1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        dif1=sqrt(dif1);
        dif2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
        dif2=sqrt(dif2);
        dif3=(x2-x4)*(x2-x4)+(y2-y4)*(y2-y4);
        dif3=sqrt(dif3);
        dif4=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
        dif4=sqrt(dif4);
        if(dif1==dif2&&dif1==dif3&&dif1==dif4)
        {
            //cout<<1<<endl;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            return 0;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }

    }
    else if(x1==x2)
    {
        k=y2-y1;
        x3=x1+k;
        y3=y1;
        x4=x2+k;
        y4=y2;
        dif1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        dif1=sqrt(dif1);
        dif2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
        dif2=sqrt(dif2);
        dif3=(x2-x4)*(x2-x4)+(y2-y4)*(y2-y4);
        dif3=sqrt(dif3);
        dif4=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
        dif4=sqrt(dif4);
        if(dif1==dif2&&dif1==dif3&&dif1==dif4)
        {
            //cout<<2<<endl;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            return 0;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    else
    {
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
        dif1=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
        dif1=sqrt(dif1);
        dif2=(x1-x4)*(x1-x4)+(y1-y4)*(y1-y4);
        dif2=sqrt(dif2);
        dif3=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
        dif3=sqrt(dif3);
        dif4=(x2-x4)*(x2-x4)+(y2-y4)*(y2-y4);
        dif4=sqrt(dif4);


        if(dif1==dif2&&dif1==dif3&&dif1==dif4)
        {
            //cout<<3<<endl;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            return 0;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }


    }



    return 0;
}


