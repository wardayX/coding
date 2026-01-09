import sys

def main():
    input = sys.stdin.read().split()
    idx = 0
    t = int(input[idx])
    idx += 1
    for _ in range(t):
        n = int(input[idx])
        idx += 1
        a = list(map(int, input[idx:idx+n]))
        idx += n
        b = list(map(int, input[idx:idx+n]))
        idx += n
        
        pairs = list(zip(a, b))
        # Sort by sum of a_i + b_i, then by a_i
        pairs.sort(key=lambda x: (x[0] + x[1], x[0]))
        
        a_sorted = [p[0] for p in pairs]
        b_sorted = [p[1] for p in pairs]
        
        print(' '.join(map(str, a_sorted)))
        print(' '.join(map(str, b_sorted)))

if __name__ == '__main__':
    main()