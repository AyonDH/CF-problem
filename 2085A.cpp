#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {string rev = s;
    reverse(rev.begin(), rev.end());
        if (k == 0)
        {
            cout << (s < rev ? "YES" : "NO") << endl;
        }
        else
        {
            if (n == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
