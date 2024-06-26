S=str(input("nhap san pham 1: "))
A=str(input("nhap san pham 2: "))
s=[]
a=[]
s=S.split(" ")
a=A.split(" ")
i=(float(s[2])*float(int(s[1]))+float(a[2])*float(int(a[1])))
print("{:.2f}".format(i))
