from collections import defaultdict

def dist(a, b):
	return(abs(a[0]-b[0]) + abs(a[1]-b[1]))

def in_range(a, b, k):
	return(dist(a, b) <= k)

t = int(input())

for i in range(0, t):

	l = list(map(int, input().split(' ')))

	n = l[0]; k = l[1]
	coords = []

	for i in range(0, n):
		coords.append(tuple(map(int, input().split(' '))))

	# Dictionary for each point storing all adjacent (reachable) points

	d = defaultdict(list)

	for a in coords:
		for b in coords:
			if a not in d:
				d[a] = []
			if in_range(a, b, k):
				d[a].append(b)

	# The trick is that either all points can be merged in one step or
	# they can not be merged to one point with any n step. Imagine a one-dimensional 
	# graph with 3 nodes called a, b, c. Now, you need to merge a and c
	# through b if they are not in a cluster. By definition, if you 
	# merge c to b (in order to connect c and a), a must also be merged
	# with b in the same step. If not, b can not be connected to a anyway.
	# This simple case applies to any number of nodes if you think about it.

	# Case 1: At least one cluster emerges with length n, return 1
	# Case 2: No cluster with length n emerges, return -1

	clusters = []

	for key, value in d.items():
		if value not in clusters:
			clusters.append(value)

	clusters.sort(key=lambda tup: len(tup), reverse=True)

	if len(clusters[0]) == n:
		print(1)
	else:
		print(-1)
