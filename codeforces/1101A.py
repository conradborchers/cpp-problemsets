for _ in range(int(input())):

	l,r,d=map(int,input().split())

	print(d) if d<l else print(r-(r%d)+d)
	