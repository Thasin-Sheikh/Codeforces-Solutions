///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
#define int long long int
#define m 1000000007

// Function to find the sum
// of all divisors of all
// numbers from 1 to N
void solve(long long n)
{

    // Stores the sum
    long long s = 0;

    for (int l = 1; l <= n;)
    {

        // Marks the last point of
        // occurrence with same count
        int r = n / floor(n / l);

        int x = (((r % m) * ((r + 1)% m))/ 2)% m;
        int y = (((l % m) * ((l - 1)% m))/ 2)% m;
        int p = ((n / l) % m);
        cout<<l<<" "<<r<<" "<<x<<" "<<y<<" "<<p<<" ";

        // Calculate the sum
        s = (s + (((x - y) % m) * p) % m+ m)% m;
        s %= m;
        cout<<s<<"\n";
        l = r + 1;
    }

    // Return the result
    cout << (s + m) % m;
}

// Driver Code
signed main()
{
    long long n = 12;
    solve(n);
    return 0;
}