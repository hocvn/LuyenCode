
def convertToBase16(s) :
	ret = ''

	while s > 0 : 
		ret += base16[s % 16]
		s //= 16

	return ret[::-1]

base16 = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']

test = int(input())

while test > 0 :
	n = int(input())
	
	print(convertToBase16(n))
	
	test -= 1
