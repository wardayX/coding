import sys

def solve():
    n, k = map(int, sys.stdin.readline().split())
    k //= 2  
    a = list(map(int, sys.stdin.readline().split()))
    
    if 2 * k == n:
        j = 1 
        ans = (n//2) + 1 
        for i in range(1, n, 2):
            if a[i] != j:
                ans = j
                break
            j += 1
        print(ans)
    else:
        f = False
        for i in range(1, n - 2 * k + 2):
            if a[i] != 1:
                print("1")
                f = True
                break
        if not f:
            print("2")

if __name__ == '__main__':
    t = int(sys.stdin.readline().strip())
    for _ in range(t):
        solve()