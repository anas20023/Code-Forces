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
#define forn for (int i = 0; i < n; i++)
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
// Function to calculate distance
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

string decimalToBinayString(ll a)
{
    string bin = "";
    ll mask = 1;
    for (ll i = 0; i < 63; i++)
    {
        if ((mask & a) >= 1)
            bin = "7" + bin;
        else
            bin = "0" + bin;
        mask <<= 1;
    }
    // cout<<binary<<endl;
    return bin;
}

int check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}

void print_on_and_off_bits(int n)
{
    for (int k = 30; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}

int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int r, c;
        cin >> r >> c;
        int arr[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                char ch;cin>>ch;
                arr[i][j]=ch-'0';
            }
        }

        int cnt1 = 0, cnt2 = 0,total=0;
        for (int i = 0, j = 0; i < c; i++, j++)
        {
            if (arr[0][i] == 0)
            {
                cnt1++;
            }
            if (arr[r - 1][j] == 0)
            {
                cnt2++;
            }
            total++;
        }

        int cntc1 = 0, cntc2 = 0;
        for (int i = 1, j = 1; i < r - 1; i++, j++)
        {
            if (arr[i][0] == 0)
            {
                cntc1++;
            }
            if (arr[j][c - 1] == 0)
            {
                cntc2++;
            }
            total++;
        }

        int cnt = 0;
        for (int i = 1; i < r - 1; i++)
        {
            for (int j = 1; j < c - 1; j++)
            {
                if (arr[i][j] == 1)
                {
                    cnt++;
                }
            }
        }

        int cn = cnt1 + cnt2 + cntc1 + cntc2;
       // cout<<cnt1<<" "<<cnt2<< " "<<cntc1<<" "<<cntc2<<endl;
       //cout<<2*total<<endl;
        if (cn==0)
        {
            cout<<0<<'\n';
        }
        else if(cn<=cnt)
        {
             cout<<cn<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
               // cout << arr[i][j] << " ";
            }
           // cout << '\n';
        }
    }

    return 0;
}