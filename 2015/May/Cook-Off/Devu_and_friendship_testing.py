'''
Created on 24-May-2015

@author: venkat
'''


def main():
    """ Print no of distinct integers in the array
    """
    tc = int(raw_input())
    for _ in xrange(tc):
        a_len = int(raw_input())
        a_num = [int(x) for x in raw_input().split()]
        a_num.sort()
        ans = 1
        for ind in xrange(1, a_len):
            if a_num[ind] != a_num[ind-1]:
                ans += 1 
        print ans
        

if __name__ == '__main__':
    main()
   