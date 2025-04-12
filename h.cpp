#include <iostream>

using namespace std;

char dp[11]; 
bool track[11] = {false}; 

void printMessage(const string &msg, int index = 0) {
    if (index >= msg.size()) {
        return;
    }

    if (!track[index]) { 
        dp[index] = msg[index]; 
        track[index] = true;
    }

    cout.put(dp[index]);
    printMessage(msg, index + 1);
}

int main() {
    string message = "Eid Mubarak";
    printMessage(message);
    return 0;
}
