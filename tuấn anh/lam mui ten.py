S=int(input("nhap so nguyen duong:"))
for i in range(S-1,-S,-1):
    print(" "*(S-1-abs(i))*2,"*"*(abs(i)+1))