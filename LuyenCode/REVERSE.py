
st = list(input())
m = int(input())
a = list(map(int, input().split()))

s = [0] * len(st)

for i in a :
	s[i-1] += 1
	s[len(st)-i] -= 1

for i in range(1,len(st)) :
	s[i] += s[i-1]

for i in range(len(st) // 2) :
	if (s[i] & 1) :
		st[i], st[len(st)-i-1] = st[len(st)-i-1], st[i]

for i in st :
	print(i, end = '')
