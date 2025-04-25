#include <iostream>
using namespace std;

typedef long long ll;

ll a, b;
ll opera(ll x) {
    ll temp = a; 
    ll op = 0;
    while (temp) {
        temp /= x;
        op++;
    }
    return op;
}

void solve() {
    cin >> a >> b;

    ll cnt = 0;
    ll orig_b = b;

    while (b < 2) {
        cnt++;
        b++;
    }

    ll low = 0, high = a + 2;
    ll mn = 1e9;

    for (ll i = 0; i <= 40; ++i) {
        ll new_b = b + i;
        ll ops = cnt + i + opera(new_b);
        mn = min(mn, ops);
    }

    cout << mn << endl;
}

int main() {
    ll x;
    cin >> x;
    while (x--) {
        solve();
    }
    return 0;
}
