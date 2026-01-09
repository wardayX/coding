import sys

def solve(s):
    n = len(s)
    chk = False
    z = 0
    for i in range(n - 1, -1, -1):
        if s[i] != '0':
            chk = True
        elif chk: 
            z += 1

    return n - (z + 1)

if __name__ == "__main__":
    t = int(sys.stdin.readline().strip())
    for _ in range(t):
        print(solve(sys.stdin.readline().strip()))