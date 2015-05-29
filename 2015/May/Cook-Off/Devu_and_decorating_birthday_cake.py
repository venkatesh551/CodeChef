'''
Created on 24-May-2015

@author: venkat
'''

from collections import defaultdict

def get_arrangement(clr_str):
    ch_map = defaultdict(int)
    for ch in clr_str:
        ch_map[ch] += 1
    sorted_list = sorted(ch_map.items(), key=lambda t:t[1], reverse = True)
    inp_len = len(clr_str)
    result = [None] * inp_len
    pos = 0
    for ele in sorted_list:
        for _ in xrange(ele[1]):
            result[pos] = ele[0]
            pos += 2
            if pos >= inp_len:
                pos = 1
    
    for ind in xrange(1, inp_len):
        if result[ind] == result[ind-1]:
            return -1
    return "".join(result)


def main():
    """ Starting point
    """
    tc = int(raw_input())
    for _ in xrange(tc):
        clr_bln = raw_input()
        print get_arrangement(clr_bln)

if __name__ == '__main__':
    main()
   