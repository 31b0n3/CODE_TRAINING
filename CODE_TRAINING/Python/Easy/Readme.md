# Exercise

 ### Bài 1. 

Viết chương trình tìm số lớn nhất trong ba số thực `a`, `b`, `c` nhập từ bàn phím

 ### Bài 2.  

Viết chương trình nhập vào hai số thực. Kiểm tra xem chúng có cùng dấu hay không?

 ### Bài 3.  
 
 Nhập vào tháng của một năm. Cho biết tháng thuộc quí mấy trong năm

 ### Bài 4.  
 
 Hãy đếm số lượng chữ số của số nguyên dương `n` nhập từ bàn phím

 ### Bài 5.  
 
 Hãy tính tích các chữ số của số nguyên dương `n` nhập từ bàn phím. 

 ### Bài 6.  
 
 Hãy tính tổng các chữ số chẵn của số nguyên dương `n` nhập từ bàn phím. 

 ### Bài 7.  
 
 Viết chương trình nhập 3 cạnh của một tam giác. Hãy cho biết đó là tam giác gì (không phải tam giác, tam giác thường, tam giác cân, tam giác đều)?

 ### Bài 8.  
 
 Viết chương trình nhập vào ngày, tháng, năm. Tính xem ngày đó là ngày thứ bao nhiêu trong năm.

 ### Bài 9.  
 
 Tìm số nguyên dương `n` nhỏ nhất sao cho `1 + 2 + … + n > 10000.`

 ### Bài 10. 

Xét xâu `s` chỉ bao gồm các kí tự ngoặc mở `(` và ngoặc đóng `)`. Xâu `s` xác định một cách đặt ngoặc đúng, nếu thỏa mãn các điều kiện:

- Tổng số ngoặc đóng = tổng số ngoặc mở

- Đi từ trái qua phải, ở bất cứ vị trí nào số đóng phải nhỏ hơn hoặc bằng số ngoặc mở

VD: Xâu `( ( () ( ())))` xác định cách đặt ngoặc đúng. Còn xâu `( () () ) ) (())` xác định cách đặt ngoặc sai.

Viết chương trình kiểm tra một xâu `s` có xác định một cách đặt ngoặc đúng không?

 ### Bài 11. 

Đề giữ bí mật người ta phải mã hóa các thông tin trước khi truyền đi hoặc lưu trữ. Một trong những cách mã hóa sớm nhất thời cổ đại đó là cách mã hóa do `Xe Da (Caesar)` đề xuất: Người ta thay mỗi chữ cái bằng chữ cái đứng sau nó `k` vị trí; việc tìm kiếm và thay thế được thực hiện theo vòng tròn bảng chữ cái.

Ví dụ: với bảng chữ cái tiếng anh có 26 chữ cái, và `k = 2` thì có nghĩa là `a` được thay bằng `c`, `b` được thay bằng `d`, ... , `y` được thay bằng `a`, `z` được thay bằng `b`. Các chữ cái in hoa được thay bằng chữ cái in hoa tương ứng như trên. Như vậy, từ `TIN HOC` sẽ được mã hóa thành `VKP JQE`

Hãy lập trình nhập vào từ bàn phím số nguyên `k (1< k <= 26)` và xâu kí tự `s` không quá `255` kí tự. Mã hóa theo quy tắc mã `Xe Da` và thông báo kết quả ra màn hình.