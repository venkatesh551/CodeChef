def solve():
    t = int(raw_input())
    for _ in range(t):
        x, y, k, n = map(int, raw_input().split())
        x -= y
        sol_exist = False
        for j in range(n):
            p, c = map(int, raw_input().split())
            if x <= p and k >= c:
                sol_exist = True
        if sol_exist:
            print "LuckyChef"
        else:
            print "UnluckyChef"


if __name__ ==  '__main__':
    solve()
