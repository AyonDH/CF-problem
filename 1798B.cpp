
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

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
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
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)
void faltu() { cerr << endl; }
template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll n, x, t, l, r;
// const ll lim=1e7;
// ll arr[lim];
// vl primes;
void solve()
{
    ll days;
    cin >> days;
    vector<vector<int>> v(days);

    for (ll i = 0; i < days; i++)
    {
        ll sz;
        cin >> sz;
        v[i].resize(sz); // Fixing memory issue
        for (ll j = 0; j < sz; j++)
        {
            cin >> v[i][j];
        }
    }

    set<int> done;
    vector<int> ans(days, -1);

    for (ll i = days - 1; i >= 0; i--)
    {
        for (ll j = 0; j < v[i].size(); j++)
        {
            if (done.count(v[i][j]) == 0)
            {

                ans[i] = v[i][j];
                done.insert(v[i][j]);
                // Stop after selecting one valid element
            }
        }
        if (ans[i] == -1)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (int it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x; // Fix undeclared variable
    while (x--)
    {
        solve();
    }
    return 0;
}