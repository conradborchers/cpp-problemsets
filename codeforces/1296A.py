for _ in range(int(input())):

	n = int(input())

	l = list(map(int, input().split(' ')))

	l2 = list(map(lambda x : True if x%2 != 0 else False, l))

	okay = sum(l2)>0 and sum(l2)<len(l) or sum(l)%2!=0

	print("YES") if okay else print("NO")
	