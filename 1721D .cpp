// -------------------- Includes -------------------- //
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <array>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <list>
#include <iterator>
#include <numeric>
#include <complex>
#include <tuple>
#include <utility>
#include <cassert>
#include <assert.h>
#include <climits>
#include <limits.h>
#include <ctime>
#include <time.h>
#include <random>
#include <chrono>
#include <fstream>
using namespace std;

// -------------------- Typedefs -------------------- //

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;

// -------------------- Defines -------------------- //

#define pr pair
#define mpr make_pair
#define ff first
#define ss second

#define mset multiset
#define mmap multimap
#define uset unordered_set
#define umap unordered_map
#define umset unordered_multiset
#define ummap unordered_multimap
#define pqueue priority_queue

#define sz(x) (int((x).size()))
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define clr(x) (x).clear()

#define pf push_front
#define pb push_back
#define popf pop_front
#define popb pop_back
#define ft front
#define bk back

#define lb lower_bound
#define ub upper_bound
#define bs binary_search

// -------------------- Constants -------------------- //

const int MAX = int(1e9 + 5);
const ll MAXL = ll(1e18 + 5);
const ll MOD = ll(1e9 + 7);
const ll MOD2 = ll(998244353);

// -------------------- Functions -------------------- //

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return;
}

void precision(int x)
{
    cout.setf(ios::fixed | ios::showpoint);
    cout.precision(x);
    return;
}

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

bool is_prime(ll a)
{
    if (a == 1)
    {
        return false;
    }
    for (ll i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool is_square(ll a)
{
    ll b = ll(sqrt(a));
    return (b * b == a);
}

bool is_cube(ll a)
{
    ll b = ll(cbrt(a));
    return (b * b * b == a);
}

int digit_sum(ll a)
{
    int sum = 0;
    while (a)
    {
        sum += int(a % 10);
        a /= 10;
    }
    return sum;
}

ll binpow(ll a, int b)
{
    ll ans = 1;
    while (b)
    {
        if ((b & 1) == 1)
        {
            ans *= a;
        }
        b >>= 1;
        a *= a;
    }
    return ans;
}

ll binpow_by_mod(ll a, ll b, ll mod)
{
    ll ans = 1;
    while (b)
    {
        if ((b & 1) == 1)
        {
            ans *= a;
            ans %= mod;
        }
        b >>= 1;
        a *= a;
        a %= mod;
    }
    return ans;
}

ll factorial(int a)
{
    ll ans = 1;
    for (int i = 2; i <= a; i++)
    {
        ans *= ll(i);
    }
    return ans;
}

ll factorial_by_mod(int a, ll mod)
{
    ll ans = 1;
    for (int i = 2; i <= a; i++)
    {
        ans *= ll(i);
        ans %= mod;
    }
    return ans;
}

// -------------------- Solution -------------------- //

const int N = 100005;
vector<int> a, b;
int n;

vector<pr<vector<int>, vector<int>>> va, vb;

vector<int> a0, a1, b0, b1;

void solve()
{
    int i, j;

    cin >> n;

    a.resize(n);
    b.resize(n);

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    clr(va);

    va.pb(mpr(a, b));

    int k;

    int ans = 0;

    for (i = 29; i >= 0; i--)
    {
        clr(vb);

        for (j = 0; j < sz(va); j++)
        {
            clr(a0);
            clr(a1);
            clr(b0);
            clr(b1);
            for (k = 0; k < sz(va[j].ff); k++)
            {
                if (va[j].ff[k] & (1 << i))
                {
                    a1.pb(va[j].ff[k]);
                }
                else
                {
                    a0.pb(va[j].ff[k]);
                }
            }

            for (k = 0; k < sz(va[j].ss); k++)
            {
                if (va[j].ss[k] & (1 << i))
                {
                    b1.pb(va[j].ss[k]);
                }
                else
                {
                    b0.pb(va[j].ss[k]);
                }
            }

            if (sz(a1) == sz(b0) && sz(a0) == sz(b1))
            {
                if (sz(a1))
                {
                    vb.pb(mpr(a1, b0));
                }
                if (sz(a0))
                {
                    vb.pb(mpr(a0, b1));
                }
            }
            else
            {
                goto end;
            }
        }

        ans += (1 << i);

        va = vb;
        cout<<sz(va)<<"\n";
        for(int i=0; i<sz(va); i++)
        {
            for(int j=0; j<va[i].first.size(); j++)
            {
                cout<<i<<" "<<va[i].first[j]<<'\t';
            }
            cout<<"\n";
            for(int j=0; j<va[i].second.size(); j++)
            {
                cout<<i<<" "<<va[i].second[j]<<'\t';
            }
            cout<<"\n";

        }

end:
        ;
    }

    cout << ans << "\n";

    return;
}

void precalc()
{
    return;
}

int main()
{
    fastio();

    precalc();

    int tests = 1, tc;
    cin >> tests;
    for (tc = 1; tc <= tests; tc++)
    {
        solve();
    }

    //cout << db(clock()) / CLOCKS_PER_SEC << endl;

    return 0;
}

/*
	# # # #   # # # #   # # # #   #       #    #       #     #
	   #      #         #     #    #     #    # #      #   #
	   #      # # # #   #     #     #   #    #   #     # #
	   #            #   #     #      # #    # # # #    #   #
	   #      # # # #   # # # #       #    #       #   #     #
*/
