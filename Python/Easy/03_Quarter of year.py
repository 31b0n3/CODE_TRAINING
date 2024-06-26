month= int(input('Nhap thang cua mot nam: '))
if month >=10:
    print("Thang", month,"thuoc quy 4")
elif month >=7:
    print("Thang", month,"thuoc quy 3")
elif month >=4:
    print("Thang", month,"thuoc quy 2")
else:
    print("Thang", month,"thuoc quy 1")