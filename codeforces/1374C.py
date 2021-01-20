for _ in range(int(input())):

	_ = input()
	l = input()

	open=0
	closed=0
	ans=0
	
	for i in l:
		if i == "(":
			open+=1
		else:
			closed+=1
		if closed>open:
			ans+=1
			closed-=1

	print(ans)
