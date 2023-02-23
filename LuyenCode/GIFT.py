
test = int(input())

for i in range(test) :
	n = int(input())
	count = 0

	while (n != 1) :
		if (n & 1) :
			n = n * 3 + 1
		else :
			n >>= 1
		count += 1
	print(count)

