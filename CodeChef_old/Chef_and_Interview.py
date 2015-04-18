import math

def factors_sum(n):
    L = int(math.sqrt(n)+1)
    ans = 0
    for i in xrange(1, L, 1):
        if n%i == 0:
            ans  += i
            d = n/i
            if d != i:
                ans += d
    return ans

def solve():
    t = int(raw_input())
    while t > 0:
        t -= 1
        n = int(raw_input())
        print factors_sum(n)

if __name__ == '__main__':
    solve()
