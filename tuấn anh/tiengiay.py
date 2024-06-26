N =int(input("nhap so tien: "))
a=N//100
print(a,"to R$ 100,00")
S=N-100*a
b=S//50
print(b,"to R$ 50,00")
D=S%50
c=D//20
print(c,"")