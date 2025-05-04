////////////////              ANAS IBN BELAL            /////////////////
//                          Template   Code                           ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          llAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//                                                                    ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<ll, ll> pii;
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
#define sz(x) (ll)x.size()
#define mid(l, r) ((r + l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_ll_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const ll inf = 2000000000;
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

typedef vector<ll>::iterator vit;
typedef set<ll>::iterator sit;

ll dx[] = {0, 0, +1, -1};
ll dy[] = {+1, -1, 0, 0};
// ll dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// ll dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

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
void faltu(T a[], ll n)
{
    for (ll i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

int main()
{
    optimize();
    ll tc = 1;
    // cin >> tc;
    while (tc--)
    {
        ll n, op, q;
        cin >> n >> op >> q;
        vector<ll> a(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<ll, ll>> pr(op);
        vector<ll> val(op);
        for (ll i = 0; i < op; i++)
        {
            ll l, r, d;
            cin >> l >> r >> d;
            pr[i] = {l, r};
            val[i] = d;
        }
        vector<ll> o_sum(op + 1, 0);
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            o_sum[l - 1]++;
            o_sum[r]--;
        }
        for (ll i = 1; i < op; i++)
        {
            o_sum[i] += o_sum[i - 1];
        }

        vector<ll> ans(n + 1, 0);
        for (ll i = 0; i < op; i++)
        {
            if (o_sum[i])
            {
                ll x = pr[i].first;
                ll y = pr[i].second;
                ans[x - 1] += o_sum[i] * val[i];
                ans[y] -= o_sum[i] * val[i];
            }
        }
        for (ll i = 1; i <=n; i++)
        {
            ans[i] += ans[i - 1];
        }
        for (ll i = 0; i < n; i++)
        {
            a[i] += ans[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}