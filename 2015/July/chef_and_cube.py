'''
Created on 13-Jul-2015

@author: Venkatesh
'''


def read_int():
    return int(raw_input())


def read_list_of_str():
    return raw_input().split()


def check_adjacent_colors(sides):
    """ check any three sides are pairwise adjacent
        and painted in the same color.
    """
    all_sets = []
    for ind in xrange(0, len(sides), 2):
        all_sets.append(set(sides[ind:ind+2]))
    for ele in all_sets[0]:
        if ele in all_sets[1] and ele in all_sets[2]:
            return True
    return False


def main():
    tc = read_int()
    for _ in xrange(tc):
        all_str = read_list_of_str()
        print "YES" if check_adjacent_colors(all_str) else "NO"


if __name__ == '__main__':
    main()
