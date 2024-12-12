// onAC(ALPHA) =>{Target Next ICPC ^-^}
//   ^-^      ^-^       ^-^    ^-^     ^-^
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
#define arrin(v, n)             \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
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
// Graph -> List Representation
const int N = 2e5 + 10;
vector<int> list_graph[N];
vector<bool> visited(N, false);
vector<int> path;
bool findHamiltonianPath(int node, int n, int total_nodes) {
    path.push_back(node);
    visited[node] = true;

    if (path.size() == total_nodes) {
        return true;
    }

    for (int neighbor : list_graph[node]) {
        if (!visited[neighbor]) {
            if (findHamiltonianPath(neighbor, n, total_nodes)) {
                return true;
            }
        }
    }

    visited[node] = false;
    path.pop_back();
    return false;
}
int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;cin >> n;
         for (int i = 1; i <= n + 1; i++) {
        list_graph[i].clear();
    }
        for (int i = 1; i <=n; i++)
        {
            // int v1, v2;
            // cin >> v1 >> v2;
            int tm;cin>>tm;
             if(i!=n){
                    list_graph[i].push_back(i+1);
                }
            if (tm== 0)
            {
                list_graph[i].push_back(n+1);
            }
            else
            {
                list_graph[n + 1].push_back(i);
            }
        }
         bool found = false;
        for (int i = 1; i <=n+1; i++)
        {
            // //cout<<list_graph[i].size()<<" "<<i<<endl;
            // //cout<<i<<" ";
            // for (int j = 0; j < list_graph[i].size(); j++)
            // {
            //     cout<<list_graph[i][j]<<" ";
            // }
            // cout<<endl;
            //  list_graph[i].clear();
            fill(visited.begin(), visited.begin() + n + 2, false);
            path.clear();
            if (findHamiltonianPath(i, n, n + 1)) {
                found = true;
                break;
            }
            
        }
        if (found) {
            //cout << "Hamiltonian Path: ";
            for (int node : path) {
                cout << node << " ";
            }
            cout << endl;
        } else {
            cout << -1<<endl;
        }
        
    }

    return 0;
}