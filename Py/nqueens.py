N = 8

def solution(table):
    for row in table:
        print(" ".join("Q" if cell else "." for cell in row))
    print()
