d={}
for _ in range(int(input())):

	s=input()
	if s not in d:
		d[s]=1
	else:
		d[s]+=1

	best=0
	ans=""
	for key in d.keys():
		if d[key]>best:
			best=d[key]
			ans=key

print(ans)