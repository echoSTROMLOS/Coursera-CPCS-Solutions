n = int(input()); arr = list(map(int, input().split())); m = max(arr);
memo = [[1e9 for _ in range(2010)] for _ in range(2010)]; memo[0][0] = 0;
for i in range(n):
    steps = 1e9
    for j in range(m+1):
        steps = min(steps, memo[i][j])
        memo[i+1][j] = abs(arr[i]-j) + steps
print(min(memo[n]))
