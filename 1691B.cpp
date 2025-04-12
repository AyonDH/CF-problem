
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
void solve()
{
    ll n;
    cin >> n;
    vl v(n);
    map<ll, ll> mp;
    vl ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second < 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    ll an = 0;
    ll stop = 0;
    for (auto it : mp)
    {
        an += it.second;
        ans.push_back(an);
        for (ll j = stop; j < an - 1; j++)
        {
            ans.push_back(j+1);
        }
        stop = an ;
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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