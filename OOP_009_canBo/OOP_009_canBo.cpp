#include <iostream>
#include <string>

using namespace std;

class SinhVien{
    protected:
        string hoTen;
        float diemToan;
        float diemAnh;
        float diemLTC;
    public:
        SinhVien(string = "", float = 0, float = 0, float = 0);
        void nhap();
        void xuat();
        float tinhDiemHocBong();
};

SinhVien::SinhVien(string ht, float dt, float da, float dltc){
    hoTen = ht;
    diemToan = dt;
    diemAnh = da;
    diemLTC = dltc;
}

void SinhVien::nhap(){
    // cin.ignore(); Vì không làm việc với mảng, không cần cin.ignore()
    // Ở bài trước, khi nhập n Sinhvien chương trình đã nhận 1 input buffer. Trong trường hợp này không có nên bỏ qua cin.ignore()
    cout << "Ho ten: ";
    getline (cin, hoTen);
    cout << "Diem toan: ";
    cin >> diemToan;
    cout << "Diem anh: ";
    cin >> diemAnh;
    cout << "Diem LTC: ";
    cin >> diemLTC;
}

void SinhVien::xuat(){
    cout << "Ho ten: " << hoTen << endl;
    cout << "Diem Toan: " << diemToan << endl;
    cout << "Diem Anh: " << diemAnh << endl;
    cout << "Diem LTC: " << diemLTC << endl;
}

float SinhVien::tinhDiemHocBong(){
    return (diemToan + diemAnh + diemLTC) / 3;
}

class CanBo : public SinhVien{
    private:
        float diemCong;
    public:
        CanBo(string = "", float = 0, float = 0, float = 0, float = 0);
        void nhap();
        void xuat();
        float tinhDiemHocBong();

};

CanBo::CanBo(string ht, float dt, float da, float dltc, float dcong) : SinhVien(ht, dt, da, dltc){
    diemCong = dcong;
}

void CanBo::nhap(){
    SinhVien::nhap();
    cout << "Diem cong: ";
    cin >> diemCong;
}

void CanBo::xuat(){
    SinhVien::xuat();
    cout << "Diem cong: " << diemCong << endl;
}

float CanBo::tinhDiemHocBong(){
    return SinhVien::tinhDiemHocBong() + diemCong;
}

int main(){
    CanBo a;
    a.nhap();
    a.xuat();
    cout << "Diem hoc bong: " << a.tinhDiemHocBong() << endl;
    return 0;
}