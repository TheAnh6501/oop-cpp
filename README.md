# Tổng hợp bài tập OOP sử dụng ngôn ngữ C++

## OOP_001: Số nguyên N:

Viết chương trình nhập vào số nguyên N. Hãy tìm và in ra các kết quả:

1. Các số nguyên tố nhỏ hơn và bằng N
2. T = 1 + 1/2 + 1/3 + ... + 1/N
3. P = 1 _ 2 _ 3 _ ... _ N
4. S = 1 - 1/2 + 1/3 - ... + (-1)^(N-1) / N
5. Q = 1 - 1/2 + 1/6 - ... + (-1)^(N-1) / N!

## OOP_002: Đọc mảng từ file txt:

Viết chương trình đọc một mảng các số nguyên từ file dat12.txt và viết các hàm sau:

1. Hàm reverse đảo ngược mảng
2. Hàm max trả về giá trị lớn nhất của mảng
3. Hàm sort sắp xếp các mảng theo thứ tự tăng dần

Sau khi gọi tớ các hàm yêu cầu đưa kết quả ra màn hình.
Chú ý: File chứa các số nguyên được lưu như sau: dòng đầu là số phần tử (N), dòng 2 là N số nguyên ngăn cách với nhau bằng 1 dấu cách

## OOP_003: Đọc hai mảng từ file text và merge:

Cho hai mảng được sắp xếp theo thứ tự tăng dần được lưu trong hai file dat131.txt và dat132.txt ở cùng thư mục. Hãy viết chương trình đọc hai file này vào và một hàm merge trộn hai mảng đó sao cho sau khi trộn xong ta được một dãy sắp theo thứ tự tăng dần và ghi kết quả vào file output13.txt trong cùng thư mục

## OOP_004: Số nguyên tố cùng nhau:

Viết chương trình nhập vào một mảng N số nguyên (N < 100). Hãy kiểm tra xem N số nguyên tố đó có nguyên tố cùng nhau hay không.

Lưu ý: Hai số nguyên được gọi là nguyên tố cùng nhau (Relative prime) nếu chúng có ước số chung lớn nhất bằng 1, còn N số nguyên được gọi là nguyên tố cùng nhau (pairwise relative prime) nếu bất cứ hai trong số chúng là nguyên tố cùng nhau

Lưu ý 2: Đây là đề bài thầy cho nhưng định nghĩa về số nguyên tố cùng nhau nhìn hơi khác (Số nguyên tố cùng nhau là hai hoặc nhiều số nguyên tố có ước chung lớn nhất (ƯCLN) bằng 1. Nói cách khác, hai số nguyên tố a và b được gọi là nguyên tố cùng nhau khi không có số nguyên tố nào khác ngoài 1 là ước số chung của chúng.)

## OOP_005: Xây dựng lớp phân số:

Xây dựng lớp phân số với các thuộc tính dữ liệu là tử số và mẫu số (nguyên) và các phương thức khởi tạo, nhập, xuất, cộng, trừ, nhân, chia 2 phân số rút gọn. Nhập vào 1 mảng các phân số và tính tổng

## OOP_006: Xây dựng lớp tam giác:

## OOP_007: Xây dựng lớp công nhân:

Xây dựng lớp Công nhân với các thuộc tính dữ liệu: họ tên (string), hệ số lương (số thực) và phụ cấp (số nguyên) và các phương thức: hàm tạo, hàm nhập, hàm xuất, hàm tính lương = hệ số lương \* 2340 + phụ cấp. Hãy nhập vào 1 mảng các Công nhân, in thông tin của mảng vừa nhập, tìm và in ra Công nhân có lương thấp nhất

## OOP_008: Xây dựng lớp Sinh viên:

Xây dựng lớp Sinh viên (Họ tên, điểm thi 3 môn Toán, Anh, Lập trình C và điểm cộng - số thực) với các phương thức: khởi tạo, nhập, xuất, tính điểm xét học bổng = điểm trung bình + điểm cộng. Hãy nhập vào 1 mảng các Sinh viên sau đó in ra danh sách các sinh viên phải thi lại theo từng môn, sắp xếp và in ra danh sách sinh viên theo theo chiều giảm dần của điểm trung bình, in ra danh sách sinh viên được học bổng (lấy từ trên xuống dưới không quá 10% tổng số, không thi lại)

## OOP_009: Cán bộ lớp kế thừa sinh viên:

Xây dựng lớp Sinh viên (Họ tên, điểm thi 3 môn Toán, Anh, Lập trình C) với các phương thức: khởi tạo, nhập, xuất, tính điểm xét học bổng = điểm trung bình. Hãy xây dựng thêm lớp Cán bộ lớp thừa kế lớp sinh viên có thêm 1 thuộc tính điểm cộng, điểm học bổng = điểm trung bình + điểm cộng

## OOP_010: Xây dựng lớp Thời gian:

Xây dựng lớp thời gian đồng thời tích hợp nạp chồng toán tử nhập, xuất, +, -, ++ tiền tố, hậu tố
