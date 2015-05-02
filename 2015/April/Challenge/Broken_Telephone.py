def solve():
    t = int(raw_input())
    while t > 0:
        t  -= 1
        n = int(raw_input())
        A = map(int, raw_input().split())
        prev = 1
        ans = 0
        for i in xrange(1, n, 1):
            if A[i] != A[i-1]:
                ans += 1 + prev
                prev = 0
            else:
                prev = 1
        print ans

if __name__  == '__main__':
    solve()
