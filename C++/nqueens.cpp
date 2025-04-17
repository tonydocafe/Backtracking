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

bool check_position(const vector<vector<int>>& table, int row, int col) {
    
    for (int i = 0; i < col; i++)if (table[row][i] == 1)return false;

    
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)if (table[i][j] == 1)return false;

    
    for (int i = row, j = col; i < N && j >= 0; i++, j--) if (table[i][j] == 1) return false;

    return true;
}
