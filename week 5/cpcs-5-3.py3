S, L = map(int, input().split())
memo = [[-1 for _ in range(180)]for _ in range(180)]
def findCount(l, add):
    if add > S: return 0
    if l==L: return add == S
    if memo[add][l] != -1: return memo[add][l]
    result = 0
    for k in range(0, 10):
        if l==0 and k==0: continue
        result += findCount(l+1, add+k)
    memo[add][l] = result
    return memo[add][l]
print(1) if (L==1 and S==0) else print(findCount(0, 0))
