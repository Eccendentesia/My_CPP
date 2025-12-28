#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> adj[10]; 

    for (int i = 0; i < 4; i++) { // row
        for (int j = 0; j < 4; j++) { // col
            int x;
            cout << "Enter number for adj[" << i << "][" << j << "]: ";
            cin >> x;
            adj[i].push_back(x); // ✅ push value into vector
        }
    }

    // Output
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            cout << "The number at adj[" << i << "][" << j << "] = " << adj[i][j] << endl;
        }
    }

    return 0;
}
