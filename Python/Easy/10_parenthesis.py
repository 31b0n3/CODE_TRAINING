s= input('Nhap xau gom ki tu "(" va ")": ')
count1 = 0
count2 = 0
check = 1
for i in s:
    if count2 > count1:
        print(s, "xac dinh cach dat ngoac sai")
        check = 0
        break
    else:
        if i == "(":
            count1 +=1
        else:
            count2 +=1
if count1 == count2 and check:
    print(s,"xac dinh cach dat ngoac dung")
