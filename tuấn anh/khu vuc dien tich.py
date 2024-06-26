S=input("nhap 3 giá trị:")
X=[]
X=S.split(" ")
A=float(X[0])
B=float(X[1])
C=float(X[2])
pi= 3.14159
print("TRIANGULO:","{:.3f}".format((A*C)/2))
print("CIRCULO:","{:.3f}".format((C**2)*pi))
print("TRAPEZIO:","{:.3f}".format((A+B)/2*C))
print("QUADRADO:","{:.3f}".format(B*B))
print("RETANGULO:","{:.3f}".format(A*B))
