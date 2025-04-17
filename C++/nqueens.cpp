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

bool n_queens(vector<vector<int>>& board, int col) {
    if (col >= N) {
        solution(board);
        return true;
    }

    bool recursion = false;
    for (int i = 0; i < N; i++) {
        if (check_position(table, i, col)) {
            table[i][col] = 1;

            recursion = n_queens(table, col + 1) || recursion;
            table[i][col] = 0;
        }
    }

    return recursion;
}
int main() {
    vector<vector<int>> table(N, vector<int>(N, 0));

    if (!n_queens(table, 0))
        cout << "Nenhuma solução encontrada" << endl;
    else
        cout << "Todas as soluções estão acima" << endl;

    return 0;
}
