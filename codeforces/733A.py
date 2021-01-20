import re
s = re.split("A|E|I|O|U|Y",input())
s.sort(key=lambda x : len(x), reverse=True)
print(len(s[0])+1)
