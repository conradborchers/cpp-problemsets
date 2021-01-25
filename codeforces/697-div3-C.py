# Not really memory efficient, might be better to iterate over
# zip(A, B) with sets and %in% booleans rather than creating
# all combinations of length 2 across A and B

from itertools import combinations

for _ in range(int(input())):

	a, b, k = list(map(int, input().split(' ')))

	A = list(map(int, input().split(' ')))
	B = list(map(int, input().split(' ')))

	pairs = combinations(zip(A, B), 2)
	pairs = [pair for pair in pairs if pair[0][0] != pair[1][0] and pair[0][1] != pair[1][1]]

	print(len(pairs))
	