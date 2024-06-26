S=str(input("nhap so "))
x=[]
x=S.split(" ")
for i in range (int(x[1])):
    if int(x[0])%10 != 0:
        x[0]= str(int(x[0])-1)
    elif int(x[0])%10 == 0:
        x[0]=str(int(x[0])//10)
print(int(x[0]))