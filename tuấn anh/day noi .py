T=str(input("nhap so:"))
x=[]
tong =0
x=T.split(" ")
for i in x:
    tong += int(i) -1 
tong +=1
print(tong)
