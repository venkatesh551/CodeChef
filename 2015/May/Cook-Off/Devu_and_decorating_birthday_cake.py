'''
Created on 24-May-2015

@author: venkat
'''

from collections import defaultdict

def get_arrangement(clr_str):
    ch_map = defaultdict(int)
    for ch in clr_str:
        ch_map[ch] += 1
    sorted_x = sorted(ch_map.items(), key=lambda t:t[1], reverse = True)
    result = ""
    cnt = 0
    while len(sorted_x) > 1:
        cur_str = ""
        for ele in sorted_x:
            cur_str += ele[0]
        last_ele = sorted_x.pop()
        while len(sorted_x) > 1 and sorted_x[-1][1] == last_ele[1]:
            sorted_x.pop()
        result += cur_str * (last_ele[1] - cnt)
        cnt = last_ele[1]
    diff = sorted_x[0][1]-cnt
    if len(sorted_x) > 0 and  diff > 0:
        if diff > 1:
            return -1
        else:
            result += sorted_x[0][0]
    else:
        return result


def main():
    """ Starting point
    """
    tc = int(raw_input())
    for _ in xrange(tc):
        clr_bln = raw_input()
        print get_arrangement(clr_bln)

if __name__ == '__main__':
    main()
   