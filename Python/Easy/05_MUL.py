num=int(input("nhap so nguyen duong: "))
mul = 1
while num !=0:
    mul *= num % 10
    num //= 10
    
print("Tich cac chu so la: ", mul)