A=int(input("nhap so A"))
B=int(input("nhap so B"))
C=int(input("nhap so C"))
D=int(input("nhap so D"))
E=A*B
F=C*D
if E>F:
    print("Khac biet =",(E-F))
elif E<F:
    print("khac biet =",(F-E))
else:
    print("ko co su khac biet")