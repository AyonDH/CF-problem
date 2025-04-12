#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str;
    cin >> str;
    int length= str.length();
    int capitalCount = 0;
    
    for (char ch : str) {
        if (isupper(ch)) {
            capitalCount++;
        }
    }
    if(capitalCount > length/2){
         transform(str.begin(),str.end(),str.begin(), ::toupper);
    }
    else{
        transform(str.begin(),str.end(),str.begin(), ::tolower);
    }
    cout << str;
    return 0;
}
