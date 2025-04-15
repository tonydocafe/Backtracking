#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 8

void solution(int table[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%s ", table[i][j] ? "Q" : ".");
        printf("\n");
    }
    printf("\n");
}


bool check_position(int table[N][N], int row, int col) {

  for (int i = 0; i < col; i++) if (table[row][i])  return false;

  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) if (table[i][j]) return false;

  for (int i = row, j = col; i < N && j >= 0; i++, j--) if (table[i][j]) return false;
}

bool nqueens(int table[N][N], int col)

  if (col >= N) {
      solution(table);
      return true;
  }

 for (int i = 0; i < N; i++) {
    if (check_position(table, i, col)) {
        table[i][col] = 1;                       
        recursion = nqueens(board, col + 1) || rescursion; 
        table[i][col] = 0;                      
    }
 }


