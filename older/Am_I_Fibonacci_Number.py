fib = [0, 0, 1]
def fib_seq():
	for i in range(3, 4784):
		fib.append(fib[i-1]+fib[i-2])

def bsearch(num):
	l = 0
	h =len(fib)-1
	while l <= h:
		m = (l+h)/2
		if fib[m] == num:
			return m;
		elif fib[m] < num:
			 l = m+1
		else:
			h = m-1
	return -1
if __name__ == '__main__':
	fib_seq()
	t = int(raw_input())
	while t > 0:
		t -= 1
		n = int(raw_input())
		if bsearch(n) == -1:
			print "NO"
		else:
			print "YES"
		
