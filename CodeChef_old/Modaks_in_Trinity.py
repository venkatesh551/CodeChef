def modpow(base, exp):
  modulus = 10**9 + 7
  base %= modulus;
  result = 1;
  while (exp > 0):
    if ((exp & 1) == 1):
    	result = (result * base) % modulus
    base = (base * base) % modulus
    exp >>= 1
  return result

if __name__ == '__main__':
	t = int(raw_input())
	while t > 0:
		t -= 1
		a, b = raw_input().split(' ')
		print modpow(long(a), long(b))
