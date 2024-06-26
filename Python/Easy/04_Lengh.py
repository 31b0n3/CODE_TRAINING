num=int(input("nhap so nguyen duong: "))
count = 0
while num !=0:
    num //= 10
    count +=1
print("So luong chu so cua so do la: ", count)


# num=input("nhap so nguyen duong: ")
# print("So luong chu so cua so do la: ", len(num))