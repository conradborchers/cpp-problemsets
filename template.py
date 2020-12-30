def solve(l):
	print(sum(l))

t = int(input())

for i in range(0, t):

	arr = input() 
	l = list(map(int, arr.split(' ')))

	solve(l)
