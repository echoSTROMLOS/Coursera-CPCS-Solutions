result = 0
n, k = map(int, input().split())
dp = [[None for _ in range(n+1)]
            for _ in range(n+1)]
ar = [[None for _ in range(n+1)]
            for _ in range(n+1)]
for i in range(n+1): 
    dp[0][i]=0; dp[i][0] = 0;
for i in range(n): 
    ar[i] = list(map(int, input().split()))
for i in range(1, n+1):
    for j in range(1, n+1):
        dp[i][j] = ar[i-1][j-1] + dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1]
        if i >= k and j >= k:
            result = max(result, dp[i][j] - dp[i][j-k] - dp[i-k][j] + dp[i-k][j-k])
print(result)
