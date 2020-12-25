n = int(input())
mxr = -100010
a = [0] *100010
for i in range(n):
    l, r = map(int, input().split())
    mxr = r if r > mxr else mxr
    a[r] = a[r]-1
    a[l-1] = a[l-1]+1
for k in range(1, mxr+1):
    a[k] += a[k-1]
for i in range(mxr+1):
    if a[i] != 0:
        print(str(i+1)+" "+str(a[i]))
