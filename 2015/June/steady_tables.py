'''
Created on 06-Jun-2015

@author: venkat
'''


def read_int_list():
    return [int(x) for x in raw_input().split()]


def read_int():
    return int(raw_input())


def main():
    """ Starting point
    """
    tc = read_int()
    for _ in xrange(tc):
        n, m = read_int_list()



if __name__ == '__main__':
    main()
