k = int(input("Nhap k: "))
s = input("Nhap xau s: ")
sn = list(s)
for i in range(len(s)):
    if s[i] >= 'a' and s[i] <= 'z':
        if ord(s[i])+ k < 123:
            sn[i] = chr(ord(s[i])+k)
        else:
            sn[i] = chr(97 + ((ord(s[i])+k)-123))
    elif s[i] >= 'A' and s[i] <= 'Z' :
        if ord(s[i])+ k < 91:
            sn[i] = chr(ord(s[i])+k)
        else:
            sn[i] = chr(65 + ((ord(s[i])+k)-91))
encoded_string = ''.join(sn)
print(encoded_string)
