// #include <bits/stdc++.h>
// #include <cstring>
// #include <algorithm>
// #include <vector>
// using namespace std;
// void solve()
// {
//     int cntpt = 0;
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//        cin>>vec[i];
//     }
//     for (int i = 0; i < n; i ++)
//     {
//         // int ind = vec[i];
//         vec.begin()+i+1;
//         if (find(vec.begin(), vec.end(), vec[i]) != vec.end())
//         {
//             cntpt++;
            
//         }
//     }
   
//     cout << cntpt << endl;
// }
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Use a map to count occurrences of each element
    unordered_map<int, int> freq;
    for (int num : vec) {
        freq[num]++;
    }

    // Count the number of elements with occurrences greater than one
    int repeatingCount = 0;
    for (auto& entry : freq) {
        if (entry.second > 1) {
            repeatingCount++;
        }
    }

    cout << repeatingCount << endl;
}

int main() {
    int x;
    cin >> x;
    while (x--) {
        solve();
    }
    return 0;
}
