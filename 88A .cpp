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
bool major(ll a,ll b,ll c)
{
    if((b-a==4||b-a+12==4)&&(c-b==3||c-b+12==3))
        return true;
    else return false;

}
bool minor(ll a,ll b,ll c)
{
    if((b-a==3||b-a+12==3)&&(c-b==4||c-b+12==4))
        return true;
    else return false;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str[12]= {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    ll i,j,n,m,k,t;
    vector<string>v;
    ll f1=0,f2=0,f3=0;
    string p1,p2,p3;
    cin>>p1>>p2>>p3;
    for(i=0; i<12; i++)
    {
        if(str[i]==p1)
            f1=i;
        if(str[i]==p2)
            f2=i;
        if(str[i]==p3)
            f3=i;
    }
    if(major(f1,f2,f3)||major(f1,f3,f2)||major(f2,f1,f3)||major(f2,f3,f1)||major(f3,f1,f2)||major(f3,f2,f1))
    {
        cout<<"major"<<endl;
        return 0;
    }
    if(minor(f1,f2,f3)||minor(f1,f3,f2)||minor(f2,f1,f3)||minor(f2,f3,f1)||minor(f3,f1,f2)||minor(f3,f2,f1))
    {
        cout<<"minor"<<endl;
        return 0;
    }
    cout<<"strange"<<endl;




    return 0;
}


