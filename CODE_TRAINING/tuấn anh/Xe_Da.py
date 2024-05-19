S=input("nhap tu:")
k=int(input("nhap k:"))
Xe_Da= []
for i in range(len(S)):
    if S[i]>="a" and S[i]<="z":
        ord(S[i])
        if (ord(S[i])+k)<= 122:
            Xe_Da.append(chr(ord(S[i])+k))
        elif (ord(S[i])+k)>122:
            Xe_Da.append(chr(ord(S[i])+k-26))
    elif S[i]>="A" and S[i]<="Z":
        ord(S[i])
        if (ord(S[i])+k)<= 90:
            Xe_Da.append(chr(ord(S[i])+k))
        elif (ord(S[i])+k)>90:
            Xe_Da.append(chr(ord(S[i])+k-26))
    else:
        Xe_Da.append(S[i])
x = "".join(Xe_Da)
print(x)