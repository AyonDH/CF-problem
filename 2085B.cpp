#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
void solve()
{
    ll n;
    
	cin >> n;
	vector<int> a(n);
	for (auto &x : a)
		cin >> x;
	bool has1 = 0, has2 = 0;
	if( a[0] == 0 || a[1] == 0){
        has1=1;
    }
	for (ll i = 2; i < n; i++)
    {
        has2 |= a[i] == 0;
    }
    
		
	int len = n;
	vector<pair<ll,ll>> ans;
	if (has2) {
		ans.push_back({2, n});
		len -= n-2-1;
	}
	if (has1) {
		ans.push_back({0, 2});
		len -= 1;
	}
	ans.push_back({0, len});
	cout << ans.size() << '\n';
	for (auto [x, y] : ans)
		cout << x+1 << ' ' << y << '\n';
    
}
int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        solve();
    }
    return 0;
}