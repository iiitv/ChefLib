// Code by Piyush

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {

    std::ios::sync_with_stdio(false);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        string pan;
        int cost[26];

        for(int i = 0; i < 26; i++)
            cin >> cost[i];

        cin >> pan;
        vector<bool> isPan(26, false);

        for(int i = 0; i < pan.length(); i++)
            isPan[pan[i] - 97] = true;

        int total = 0;

        for(int i = 0; i < 26; i++) {
            if(!isPan[i])
                total += cost[i];
        }

        cout << total << endl;
    }

    return 0;
}
