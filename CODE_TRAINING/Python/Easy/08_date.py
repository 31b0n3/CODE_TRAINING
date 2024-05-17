date = int(input("Nhap ngay: "))
month = int(input("Nhap thang: "))
year = int(input("Nhap nam: "))
sum = 0
for i in range (1,month):
    match i:
        case 1|3|5|7|8|10|12:
            sum += 31
        case 2:
            if year % 4 ==0:
                sum += 29
            else:
                sum += 28
        case 4|6|9|11:
            sum +=30
sum += date
print(date,"/",month,"/", year, "la ngay thu", sum, "trong nam")