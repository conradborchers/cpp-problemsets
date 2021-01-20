def digsum(x):
	return sum(map(int,[char for char in x]))

n=[char for char in input()]
count=0
while(len(n)>1): 
	n=str(digsum(n))
	count+=1
print(count)
