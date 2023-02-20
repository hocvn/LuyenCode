
def convertToBase16(s) :
	ret = ''
	valueInBinary = 0

	for i in range(len(s)) : 
		
		valueInBinary += (1 << (3 - (i % 4))) * int(s[i])
	
		if ((i+1) % 4 == 0) :
			ret += base16[valueInBinary]

			valueInBinary = 0

	return str(ret)

test = int(input())

base16 = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']

while test > 0 :
	n = str(input())
	
	while (len(n) % 4 != 0) : 
		n = '0' + n;
	
	print(convertToBase16(n))
	
	test -= 1
