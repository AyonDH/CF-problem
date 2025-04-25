#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    ll cntn = 0;
    ll mn = LLONG_MAX;
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (!arr[i][j])
            {
                cntn++;
            }
            if (arr[i][j] < 0)
            {
                cntn++;
            }
            mn = min(mn, abs(arr[i][j]));
            sum += abs(arr[i][j]);
        }
    }
    if (cntn % 2 != 0)
    {
        sum -= 2 * mn;
    }

    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll x;
    cin >> x;
    while (x--)
    {
        solve();
    }

    return 0;
}
