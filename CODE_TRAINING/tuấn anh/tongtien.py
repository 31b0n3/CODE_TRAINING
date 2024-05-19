ssp=int(input("nhap san pham:"))
def tongtien(X):
    global st
    a=[]
    a=X.split(" ")
    match a[0]:
        case "1001":
            st += 1.5*int(a[1])
        case "1002":
            st += 2.5*int(a[1])
        case "1003":
            st += 3.5*int(a[1])
        case "1004":
            st += 4.5*int(a[1])
        case "1005":
            st += 5.5*int(a[1])

st = 0
for i in range(ssp):
    x=str(input("nhap so ma va san pham"))
    tongtien(x)
print(st)

