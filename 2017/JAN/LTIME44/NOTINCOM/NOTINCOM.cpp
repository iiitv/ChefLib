// Code by Piyush
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {

    std::ios::sync_with_stdio(false);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n, m;
        cin >> n >> m;
        vector<short int> collection(1e+6, 0);
        for (int i = 0; i < n + m; i++) {
            int temp;
            cin >> temp;
            ++collection[temp - 1];
        }
        int common = 0;
        for (int i = 0; i < collection.size(); i++) {
            if (collection[i] > 1)
                common++;
        }
        cout << common << endl;
    }
    return 0;
}
