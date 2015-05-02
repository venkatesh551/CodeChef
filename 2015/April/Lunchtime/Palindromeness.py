def is_palindrome(s):
    n = len(s)
    i, j = 0, n-1
    while i < j:
        if s[i] != s[j]:
            return False
        i += 1
        j -= 1
    return True

def palindromeness(s):
    ans = 0
    for i in xrange(len(s)):
        for j in xrange(i, len(s), 1):
            if is_palindrome(s[i:j+1]):
                ans += 1
                s_len = j-i
                if s_len > 1:
                    ans += 1 if is_palindrome(s[i:i+s_len/2]) else 0
    return ans

def main():
    t = int(raw_input())
    for _ in xrange(t):
        s = raw_input()
        print palindromeness(s) 

if __name__ == '__main__':
    main()

