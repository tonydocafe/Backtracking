N = 8

def solution(table):
    for row in table:
        print(" ".join("Q" if cell else "." for cell in row))
    print()
def checkposition(table, row, col):
    for i in range(table):
        if table[row][i]:
            return False
    
    i, j = row, col
    while i >= 0 and j >= 0:
        if table[i][j]:
            return False
        i -= 1
        j -= 1

    i, j = row, col
    while i < N and j >= 0:
        if table[i][j]:
            return False
        i += 1
        j -= 1

    return True
def n_queens(table, col):
    if col >= N:
        solution(table)
        return True

    recursion = False
    for i in range(N):
        if checkposition(table, i, col):
            table[i][col] = 1
            recursion = n_queens(table, col + 1) or rescursion
            table[i][col] = 0  

    return rescursion

def main():
    table = [[0] * N for _ in range(N)]
    if not n_queens(table, 0):
        print("Nenhuma solução encontrada")
    else:
        print("Todas as soluções acima")

if __name__ == "__main__":
    main()
