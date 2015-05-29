import fractions
import math


def prime_factors(n):
    factors = []
    num = n
    while n % 2 == 0:
        n /= 2
    if num != n:
        factors.append(2)
    limit = math.sqrt(n)
    for i in range(3, limit+1, 2):
        num = n
        while n % i == 0:
            n /= i
        if num != n:
            factors.append(i)
    if n > 2:
        factors.append(n)
    return factors


def main():
    t = int(raw_input())
    for _ in xrange(t):
        A, B = map(long, raw_input().split())
        gcd = fractions.gcd(A, B)


if __name__ == '__main__':
    main()
