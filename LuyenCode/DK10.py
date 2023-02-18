
tmp = input().split(" ")

month = int(tmp[0])
year = int(tmp[1])

if year > 0 and year <= 100000 and month > 0 and month <= 12 :
    
    daysOfMonth = [0,31,28,31,30,31,30,31,31,30,31,30,31]
    
    if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
        daysOfMonth[2] += 1

    print(daysOfMonth[month])
else:
    print("INVALID")
