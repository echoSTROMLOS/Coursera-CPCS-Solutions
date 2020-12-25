n, W = map(int, input().split())
wt, val, sol = [], [], []
for i in range(n):
    a, b = map(int, input().split())
    wt.append(a); val.append(b);
    
dp = [[None for _ in range(n+1)]
            for _ in range(W+1)] 
for k in range(W+1): dp[k][0]=0;

for i in range(1, n+1):
    for w in range(W+1):
        dp[w][i] = dp[w][i-1]
        if w >= wt[i-1]:
            dp[w][i] = max(dp[w][i], dp[w-wt[i-1]][i-1]+val[i-1])

ans = dp[W][n]
for i in range(n, 0, -1):
    if ans <= 0: break
    if ans == dp[W][i-1]: continue
    else: sol.append(i); ans -= val[i-1]; W -= wt[i-1];
    
sol.reverse(); print(len(sol));
for i in sol: print(i, end=" ")
