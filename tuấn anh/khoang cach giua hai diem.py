p1=input("nhap p1: ")
p2=input("nhap p2: ")
s1= []
s2= []
s1=p1.split(" ")
s2=p2.split(" ")
x1=float(s1[0])
x2=float(s2[0])
y1=float(s1[1])
y2=float(s2[1])
d=((x2-x1)**2+(y2-y1)**2)**0.5
print("{:.4f}".format(d))
