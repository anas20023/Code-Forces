//onAC(ALPHA) =>{Target Next ICPC ^-^}           
//  ^-^      ^-^       ^-^    ^-^     ^-^  
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;


template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mid(l, r) ((r + l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_int_prime 999999937
#define arrin(v,n) for(int i=0;i<n;i++)cin>>v[i];
const double PI = (2.0 * acos(0.0));
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("inputf.in", "r", stdin); \
    freopen("outpuft.out", "w", stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}
ll clc(ll x){
    return ceil(log2(x));
}
void solve(){
    ll n,m,a,b;cin>>n>>m>>a>>b;
    ll x=min(a,n-a+1);
    ll y=min(b,m-b+1);
    ll tm1=ceil(log2(n))+ceil(log2(y));
  ll tm2=ceil(log2(m))+ceil(log2(x));
    // ll tm1=clc(n)+clc(y);
    // ll tm2=clc(m)+clc(x);
    cout<<1+min(tm1,tm2)<<endl;
    
}
int main()
{
    optimize();
    int tc = 1; 
    cin >> tc;
    while (tc--)
    {
       solve();
    }

    return 0;
}   