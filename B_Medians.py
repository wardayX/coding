import sys

def solve(n, k):
    if n == 1:
        print("1\n1") 
        return
    if k == 1 or k == n:
        print(-1) 
        return
    p2 = k - k % 2 
    p3 = k + 1 + k % 2 
    print("3")
    print(f"1 {p2} {p3}")

if __name__ == "__main__":
    t = int(sys.stdin.readline().strip()) 
    for _ in range(t):
        n, k = map(int, sys.stdin.readline().split())
        solve(n, k)