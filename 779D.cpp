#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define PB push_back

string s, t;
vl seq;

bool can_convert(ll xt)
{
    vl deleted(s.length(), 0);

    for (ll i = 0; i < xt; i++)
    {
        deleted[seq[i]] = 1;
    }

    ll cnt = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (cnt == t.length())
            break;

        if (!deleted[i] && s[i] == t[cnt])
        {
            cnt++;
        }
    }

    return cnt == t.length();
}

void solve()
{
    cin >> s >> t;

    seq.resize(s.size());
    for (ll i = 0; i < s.size(); i++)
    {
        cin >> seq[i];
        seq[i]--;
    }

    ll l = 0, r = s.size(), ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (can_convert(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}
