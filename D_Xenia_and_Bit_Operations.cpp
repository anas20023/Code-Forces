////////////////              ANAS IBN BELAL            ////////////////
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                      DEPARTMENT OF CSE                             ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
using namespace std;

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

const double PI = (2.0 * acos(0.0));
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007


#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
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
/// Segment Tree Code////
const int MAX = 2e5 + 100;
ll a[MAX], tree[MAX * 4];

void build(int at, int L, int R, int ch) {
    if (L == R) {
        tree[at] = a[L];
        return;
    }
    int mid = (L + R) / 2;
    int left = 2 * at;
    int right = 2 * at + 1;
    build(left, L, mid, ch + 1);
    build(right, mid + 1, R, ch + 1);
    if (ch % 2 == 0) tree[at] = (tree[left] | tree[right]);
    else tree[at] = (tree[left] ^ tree[right]);
}

void update(int at, int L, int R, int pos, ll val, int ch) {
    if (pos > R || pos < L) return;
    if (L == R) {
        tree[at] = val;
        return;
    }
    int mid = (L + R) / 2;
    int left = at * 2;
    int right = at * 2 + 1;
    update(left, L, mid, pos, val, ch + 1);
    update(right, mid + 1, R, pos, val, ch + 1);
    if (ch % 2 == 0) tree[at] =( tree[left] | tree[right]);
    else tree[at] = (tree[left] ^ tree[right]);
}


ll query(int at, int L, int R, int l, int r) {
    if (l > R || r < L) return 0;
    if (L >= l && R <= r) {
        return tree[at];
    }
    int mid = (L + R) / 2;
    int left = at * 2;
    int right = at * 2 + 1;
    ll x = query(left, L, mid, l, r);
    ll y = query(right, mid + 1, R, l, r);
    return x + y;
}
int main()
{
    optimize();
    int tc = 1;
   // cin >> tc;
    while (tc--)
    {
        ll n, q; cin >> n >> q;
        n = (1 << n);
        //dbg(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ch = (n % 2 == 0) ? 0 : 1;
        build(1, 0, n - 1, ch);
        while (q--) {
            ll pos, val;
            cin >> pos >> val;
            pos--;
            update(1, 0, n - 1, pos, val, ch);
            cout << tree[1] << endl;
        }
    }

    return 0;
}