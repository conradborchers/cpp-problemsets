def max_f(l):

	sums = []

	for i in range(0, len(l)):
		sums.append(sum(l[:i+1]))

	return(max(sums))


def solve(r, b):

	p = max_f(r); q = max_f(b)

	if p >= p+q and p >= 0:
		print(p)
	elif q >= p+q and q >= 0:
		print(q)
	elif p+q >= 0:
		print(p+q)
	else:
		print(0)


t = int(input())
for i in range(0, t):

	n = int(input())

	arr = input() 
	r = list(map(int, arr.split(' ')))

	m = int(input())

	arr = input() 
	b = list(map(int, arr.split(' ')))

	solve(r, b)
