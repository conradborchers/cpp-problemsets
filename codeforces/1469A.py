for i in range(int(input())):

	chars = list(input())

	if len(chars)%2 or chars[0] == ")" or chars[-1] == "(":
		print("NO")

	else:
		print("YES")
