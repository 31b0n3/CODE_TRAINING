S=input("nhap ba so nguyen: ")
x=[]
x=S.split(" ")
A= int(x[0])
B= int(x[1])
C= int(x[2])
if A >= B and A>=C:
    print("Max =",A)
elif B>=A and B>=C:
    print("Max =",B)
else :
    print("Max =",C)
    
