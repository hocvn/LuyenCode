
n, q = map(int, input().split())

isAppeared = [False] * 26
isDeleted = [False] * n
st = [input() for i in range(n)]

ans = n

for i in range(q) :
	ch = input()
	
	if (isAppeared[ord(ch[0]) - 97] == True) : # ord('a') = 97
		print(ans)
		continue

	isAppeared[ord(ch[0]) - 97] = True

	for j in range(n) :
		if (isDeleted[j] == False and ch in st[j]) :
			isDeleted[j] = True
			ans -= 1

	print(ans)
