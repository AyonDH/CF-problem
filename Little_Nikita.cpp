
#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << "no" << endl;
            continue;
        }
        else if (x == y)
        {
            cout << "yes" << endl;
            continue;
        }
        else if (x > y)
        {
            int temp = x - y;
            if(temp%2 == 0){
            cout << "yes" << endl;
            continue;}
            else{
                cout << "no" << endl;
                continue;
            }
        }
    }
    return 0;
}