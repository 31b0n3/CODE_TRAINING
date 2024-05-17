a = float(input("Nhap canh a: "))
b = float(input("Nhap canh b: "))
c = float(input("Nhap canh c: "))
vuong =0
can =0
if (a+b)>c and (a+c)>b and (b+c)>a:
    if a == b and b ==c:
        print("Tam giac deu")
    else:
        if   (a**2)+(b**2)==(c**2): 
            vuong = 1
        elif (c**2)+(b**2)==(a**2):
            vuong = 2 
        elif (a**2)+(c**2)==(b**2):
            vuong = 3
        
        if a==b:
            can = 1
        elif b==c:
            can = 2
        elif c==a:
            can =3
        
        if vuong == can and vuong:
            print("Tam giac vuong can")
        elif vuong:
            print("Tam giac vuong")
        elif can:
            print("Tam giac can")
        else:
            print("Tam giac thuong")
    

    
else:
    print("Đay khong phai tam giac")