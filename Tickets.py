def main():
    t = int(raw_input())
    for _ in xrange(t):
        code = raw_input()
        flag = True
        if code[0] == code[1]:
            flag = False
        else:
            n = len(code)
            if n%2 == 1:
                code += code[1]
            for i in xrange(2, len(code), 2):
                if (code[i] != code[0]) or (code[i+1] != code[1]):
                    flag = False
                    break
        print "YES" if flag else "NO"

if __name__ == '__main__':
    main()
