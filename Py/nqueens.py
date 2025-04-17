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

