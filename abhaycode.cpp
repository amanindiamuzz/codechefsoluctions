#include <algorithm>
#include <bitset>
#include <complex>
#include <cmath>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <math.h>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <climits>
 
const long long SZ = 401010;
const long long INF = 1e18;
const long long MOD = 1000000007;
const long long mod = 998244353;
long long opnmbr = 1;

#define ll                  int
#define ld                  long double
#define pb                  push_back
#define eb                  emplace_back
#define ppb                 pop_back
#define pf                  push_front
#define ppf                 pop_front
#define pll                 pair<ll, ll>
#define vi                  vector<ll>
#define qi                  queue<ll>
#define si                  set<ll>
#define mi                  map<ll, ll>
#define fi                  first
#define se                  second
#define sz(x)               (ll)x.size()
#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()
#define Max(a,b)            ((a>b)?a:b)
#define Min(a,b)            ((a<b)?a:b)
#define ci(X)               ll X; cin>>X
#define cii(X, Y)           ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)       ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)   ll W, X, Y, Z; cin>>W>>X>>Y>>Z
#define krosuru             ll ___T; cin>>___T; while (___T-- > 0)
#define ons(X)              cout<<"Case #"<<op++<<": "<<X<<endl;
#define FIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl                '\n'
#define Endl                '\n'
#define hell                1000000007
#define forn(i, n)          for(ll i = 0; i < (n); i++)
#define forl(i, l, r)       for(ll i = l; i < (r); i++)
#define forr(i, l, r)       for(ll i = l; i >= (r); i--)
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), V, sizeof((X)))

//inline ll read()
//{
//    register ll x; register char c(getchar()); register bool k;
//    while((c < '0' || c > '9') && c ^ '-') if((c = getchar()) == EOF) exit(0);
//    if(c ^ '-') x = c & 15, k = 1; else x = 0, k = 0;
//    while(c = getchar(), c >= '0' && c <= '9') x = (x << 1) + (x << 3) + (c & 15);
//    return k ? x : -x;
//}

using namespace std;

void solve()
{
    
}

ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void krdiyasuru()
{
    ci(n);
    vi a(n);
    ll km = 0, fuel=0;
    forn(i, n)
    {
      cin>>a[i];
    }
    forn(i, n)
    {
        
    }
    for(int i=0; i<n; i++)
    {
      km += a[i];
      fuel += a[i];
      if(fuel == 0)
      {
          break;
      }
      fuel -= 1;
    }
    cout<<km;
    cout<<endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    krosuru
    {
        krdiyasuru();
    }
    return 0;
}

