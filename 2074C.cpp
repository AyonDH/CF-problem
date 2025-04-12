#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll x;
    cin >> x;

for (ll y = 1; y < x; y++)
{
    if ((x + y > (x ^ y)) && (x + (x ^ y) > y) && (y + (x ^ y) > x)) {
        cout << y << endl;
    } else {
        cout << -1 << endl;
    }
}


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
