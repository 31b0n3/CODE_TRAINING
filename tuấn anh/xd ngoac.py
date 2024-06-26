S=input("nhap xau ki tu:")
A=[]
for i in S:
    if i == "(":
        A.append(i)
    elif i == ")":
        if len(A)>0:
            A.pop()
        else:
            print("xau ko hop le")
            break 
if len(A)==0:
    print("S hop le:")
else: 
    print("xau ko hop le")
       
    