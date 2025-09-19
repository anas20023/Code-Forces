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
const int N=1e6+123;
bitset<N> is_prime;
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
void seive(){
    is_prime.set();
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= N; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= N; i += p)
                is_prime[i] = false;
        }
    }
}
template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

ll pw(ll base , ll ex){
    ll r=1;
    base%=MOD;
    while(ex>0){
        if(ex&1) r=(r*base)%MOD;
        base=(base*base)%MOD;
        ex>>=1;
    }
    return r;
}
void solve() {
    int n, q; cin >> n >> q;
    vector<pair<int,int>> vp(n);
    vector<long long> val(n);

    vector<int> xs, ys;
    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        vp[i] = {a,b};
        val[i] = 1LL*a*b;
        xs.push_back(a);
        ys.push_back(b);
    }

    vector<array<int,4>> queries(q);
    for (int i=0; i<q; i++) {
        int hs, ws, hd, wd; cin >> hs >> ws >> hd >> wd;
        queries[i] = {hs,ws,hd,wd};
        xs.push_back(hs); xs.push_back(hd);
        ys.push_back(ws); ys.push_back(wd);
    }

    // coordinate compression
    sort(xs.begin(), xs.end()); xs.erase(unique(xs.begin(),xs.end()), xs.end());
    sort(ys.begin(), ys.end()); ys.erase(unique(ys.begin(),ys.end()), ys.end());

    auto getx = [&](int v){ return int(lower_bound(xs.begin(), xs.end(), v) - xs.begin()) + 1; };
    auto gety = [&](int v){ return int(lower_bound(ys.begin(), ys.end(), v) - ys.begin()) + 1; };

    int X = xs.size(), Y = ys.size();
    vector<vector<long long>> grid(X+2, vector<long long>(Y+2,0));

    for (int i=0; i<n; i++) {
        int cx = getx(vp[i].first);
        int cy = gety(vp[i].second);
        grid[cx][cy] += val[i];
    }

    // build prefix sum
    vector<vector<long long>> pref(X+2, vector<long long>(Y+2,0));
    for (int i=1; i<=X; i++) {
        for (int j=1; j<=Y; j++) {
            pref[i][j] = grid[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }

    // query
    for (auto [hs,ws,hd,wd] : queries) {
        int x1 = getx(hs), x2 = getx(hd);
        int y1 = gety(ws), y2 = gety(wd);

        // need strictly inside: (hs, ws) < (a, b) < (hd, wd)
        x1++; y1++; x2--; y2--;
        if (x1> x2 || y1> y2) { cout << 0 << "\n"; continue; }

        long long ans = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
        cout << ans << "\n";
    }
}

int main()
{
    optimize();
    int tc = 1;
   // seive();
    cin >> tc;
    while (tc--)
    {
       solve();
    }

    return 0;
}   