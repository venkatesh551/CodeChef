def main():
    t = int(raw_input())
    for _ in xrange(t):
        _ = int(raw_input())
        A = map(int, raw_input().split())
        A.sort()
        if A[0] < 2:
            print -1
        elif A[0] == 2:
            print sum(A)
        else:
            print sum(A) - A[0] + 2

if __name__ == '__main__':
    main()
