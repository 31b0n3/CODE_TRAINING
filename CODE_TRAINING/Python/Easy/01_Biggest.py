a = float(input("Nhap so thuc a: "))
b = float(input("Nhap so thuc b: "))
c = float(input("Nhap so thuc c: "))
print("So thuc lon nhat la: ", end="")
if a>b and a>c:
    print(a)
elif b>c and b>a:
    print(b)
else:
    print(c)