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

void solve() {
 int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<vector<int>> children(n+1);
        int root = -1;
        for (int i = 1; i <= n; i++) {
            int parent = p[i-1];
            if (parent == i) {
                root = i;
            } else {
                children[parent].push_back(i);
            }
        }

        vector<int> next_node(n+1, 0);
        deque<int> q;
        if (n > 0) {
            q.push_back(root);
            while (!q.empty()) {
                int u = q.front();
                q.pop_front();
                if (!children[u].empty()) {
                    int chosen;
                    if (u == root) {
                        chosen = *min_element(children[u].begin(), children[u].end());
                    } else {
                        chosen = *max_element(children[u].begin(), children[u].end());
                    }
                    next_node[u] = chosen;
                    q.push_front(chosen);
                    for (int child : children[u]) {
                        if (child != chosen) {
                            q.push_back(child);
                        }
                    }
                }
            }
        }

        vector<bool> is_target(n+1, false);
        for (int i = 1; i <= n; i++) {
            if (next_node[i] != 0) {
                is_target[next_node[i]] = true;
            }
        }

        vector<int> starts;
        for (int i = 1; i <= n; i++) {
            if (!is_target[i]) {
                starts.push_back(i);
            }
        }

        if (root != -1) {
            auto it = find(starts.begin(), starts.end(), root);
            if (it != starts.end()) {
                starts.erase(it);
                sort(starts.begin(), starts.end());
                starts.insert(starts.begin(), root);
            } else {
                sort(starts.begin(), starts.end());
            }
        } else {
            sort(starts.begin(), starts.end());
        }

        cout << starts.size() << endl;
        for (int s : starts) {
            vector<int> path;
            int cur = s;
            while (cur != 0) {
                path.push_back(cur);
                cur = next_node[cur];
            }
            cout << path.size() << endl;
            for (int i = 0; i < path.size(); i++) {
                if (i > 0) cout << " ";
                cout << path[i];
            }
            cout << endl;
        }
        cout<<endl;
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