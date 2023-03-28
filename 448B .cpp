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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string s1,s2,s3,s4;
    ll i,j,n,m,k,t;
    cin>>s1>>s2;
    ll cnts1[26]= {0},cnts2[26]= {0};
    for(i=0; i<s1.length(); i++)
    {
        cnts1[s1[i]-'a']++;
    }
    for(i=0; i<s2.length(); i++)
    {
        cnts2[s2[i]-'a']++;
    }
    ll f=1;
    s3=s1,s4=s2;
    for(i=0; i<26; i++)
    {
        if(cnts1[i]<cnts2[i])
        {
            f=0;
            break;
        }
    }
    if(!f)
    {
        cout<<"need tree"<<endl;
        return 0;
    }
    ll fin=0,lin=0;
    while(fin<s1.length())
    {
        if(s1[fin]!=s2[lin])
        {
            s1.erase(fin,1);
        }
        else
        {
            fin++;
            lin++;
        }
    }
    if(s1==s2)
    {
        cout<<"automaton"<<endl;
        return 0;
    }
    ll f1=1;
    for(i=0;i<26;i++)
    {
        if(cnts1[i]!=cnts2[i])
        {
            f1=0;
            break;
        }
    }
    if(f1)
    {
        cout<<"array"<<endl;
        return 0;
    }
    cout<<"both"<<endl;
    return 0;
}


