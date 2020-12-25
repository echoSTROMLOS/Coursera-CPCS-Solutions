table = dict()
def CMM(m, i, j):
    if (i, j) not in table:
        if i+1 == j:
            table[i, j] = 0
        else:
            table[i, j] = float("inf")
            for k in range(i+1, j):
                table[i,j] = min(table[i,j], CMM(m,i,k)+CMM(m,k,j)+m[i]*m[k]*m[j])
    return table[i,j]
        
n = int(input())
m = list(map(int, input().split()))
print(CMM(m, 0, n))
