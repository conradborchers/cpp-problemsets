k=int(input());s=input()
d={}

for char in s:
	if char not in d:
		d[char]=1
	else:
		d[char]+=1

for i in d.values():
	if i%k!=0: print(-1); exit()

res=""
s=[char for char in s]

for char in sorted(d.keys()):
	res+=char*(s.count(char)//k)

res=res*k

print(res)
