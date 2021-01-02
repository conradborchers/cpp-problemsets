def solve(x):
    y=0
    k=0
    while y<x:
        k+=1
        y+=k
    print(k+1) if y==x+1 else print(k)
	
for _ in range(int(input())): solve(int(input()))
