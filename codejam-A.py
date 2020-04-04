flag = None


def printDiagonalSums(mat, n):
    principal = 0
    global flag
    c = list()
    for i in range(0, n):
        for j in range(0, n):

            if (i == j):
                principal += mat[i][j]
                c.append(mat[i][j])
    if c.count(c[0]) == len(c):
        flag = True
    else:
        flag = False
    return principal


t = int(input())
for i in range(0, t):
    n = int(input())
    matrix = list()
    output = list()
    rows = 0
    for j in range(0, n):
        tp = [int(x) for x in input().split()]
        matrix.append(tp)
        tps = set(tp)

        if len(tps) == len(tp):
            pass
        else:
            rows = rows + 1

    trace = printDiagonalSums(matrix, n)
    output.append(trace)
    output.append(rows)
    cols = 0
    for col in range(0, n):
        tpc = list()
        for j in range(0, n):
            tpc.append(matrix[j][col])
        tpcs = set(tpc)
        if len(tpc) == len(tpcs):
            pass
        else:
            cols = cols + 1
    output.append(cols)
    print("Case #{}: ".format(i + 1), end="")
    for op in output:
        print(op, end=" ")
    print("")