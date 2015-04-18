def solve():
    n = int(raw_input())
    s = raw_input()
    ascii_mp = [0 for _ in xrange(26)]
    cnt = 0
    for i in xrange(0, 2*n-2, 2):
        key = ord(s[i]) - ord('a')  
        ascii_mp[key] += 1
        door = ord(s[i+1].lower()) - ord('a')
        if ascii_mp[door] > 0:
            ascii_mp[door] -= 1
        else:
            cnt += 1
    print cnt
if __name__ == '__main__':
    solve()
