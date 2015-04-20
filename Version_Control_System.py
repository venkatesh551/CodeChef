def main():
    t = int(raw_input())
    for _ in xrange(t):
        n, m, k = map(int, raw_input().split())
        ignore = map(int, raw_input().split())
        tracked = map(int, raw_input().split())
        A = [0] * (n+1)
        for i in ignore:
            A[i] += 1
        for i in tracked:
            A[i] += 1
        sum_a, sum_b = 0, 0
        for i in xrange(n+1):
            sum_a += 1 if A[i] == 0 else 0
            sum_b += 1 if A[i] == 2 else 0
        print sum_b, sum_a-1

if __name__ == '__main__':
    main()
