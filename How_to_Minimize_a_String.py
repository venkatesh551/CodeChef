def solve():
    t = int(raw_input())
    for _ in xrange(t):
        n = int(raw_input())
        s = raw_input()
        b = sorted(s)
        ind = -1
        for i in xrange(n):
            if s[i] != b[i]:
                ind = i
                break
        if ind == -1:
            print s
            continue
        j = ind+1
        ans = s
        while j < n:
            if s[j] == b[ind]:
                temp = s[0:ind] + s[j] + s[ind:j] + s[j+1:n]
                if ans > temp:
                    ans = temp
            j += 1
        print ans
if __name__ == '__main__':
    solve()
