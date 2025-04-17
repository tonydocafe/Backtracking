#include <iostream>
#include <vector>

#define N 8  

using namespace std;


void solution(const vector<vector<int>>& table) {
    for (const auto& row : table) {
        for (int cell : row) {
            cout << (cell == 1 ? "Q" : ".") << " ";
        }
        cout << endl;
    }
    cout << endl;
}

