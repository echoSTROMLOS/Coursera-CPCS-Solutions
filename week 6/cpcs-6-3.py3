dp = [[None for _ in range(1010)] 
            for _ in range(1010)]
def LCS(n, a, b):
    for i in range(n+1):
        for j in range(n+1):
            if i==0 or j==0: dp[i][j] = 0
            elif a[i-1] == b[j-1]: dp[i][j] = dp[i-1][j-1] + 1
            else: dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    return dp[n][n]  

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
ans = LCS(n, a, b)
i, j, l, r, index, lcs = n, n, 0, 0, ans, []
    
while index > 0:
    if dp[i-1][j] == dp[i][j]: i-=1
    elif dp[i][j-1] == dp[i][j]: j-=1
    else: lcs.append(a[i-1]); i-=1; index-=1; j-=1;
lcs.reverse(); L = len(lcs);

print(ans)
for k in range(len(a)):
    if l >= L: break
    if a[k]== lcs[l]:
        print(k, end=" ")
        l += 1
print()
for k in range(len(b)):
    if r >= L: break
    if b[k] == lcs[r]:
        print(k, end=" ")
        r += 1
print()               

