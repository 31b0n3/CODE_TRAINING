num=int(input("nhap so nguyen duong: "))
add = 0
while num !=0:
    if (num % 10) %2 ==0:
        add += num % 10
    num //= 10
    
print("Tong cac chu so chan la: ", add)