#include <iostream>
#include <string>

using namespace std;

class CongNhan{
    private:
        string hoTen;
        float heSoLuong;
        int phuCap;
    public:
        CongNhan(string = "", float = 0, int = 0);
        void nhap();
        void xuat();
        float tinhLuong() const;
};

CongNhan::CongNhan(string ht, float hsl, int pc){
    hoTen = ht;
    heSoLuong = hsl;
    phuCap = pc;
}
void CongNhan::nhap(){
    cin.ignore();
    // fflush(stdin);
    cout << "Ho ten: ";
    getline (cin, hoTen);
    cout << "He so luong: ";
    cin >> heSoLuong;
    cout << "Phu cap: ";
    cin >> phuCap;
}

void CongNhan::xuat(){
    cout << "Ho ten: " << hoTen << endl;
    cout << "He so luong: " << heSoLuong << endl;
    cout << "Phu cap: " << phuCap << endl;
    cout << "Luong: " << tinhLuong() << endl;
}

float CongNhan::tinhLuong() const{
    return heSoLuong * 2340 + phuCap;
}

int main(){
    CongNhan a[1000];
    int n, i;
    cout << "So cong nhan: ";
    cin >> n;
    // In thông tin các Công nhân
    for (i = 0; i < n; i++){
        cout << "Cong nhan thu " << i + 1 << ": ";
        a[i].nhap();
    }
    cout << "Danh sach cong nhan: " << endl;
    for (i = 0; i < n; i++){
        cout << "Cong nhan thu " << i + 1 << ": ";
        a[i].xuat();
    }
    // Tìm nhan viên co lương thap nhất
    cout << "Cong nhan co luong thap nhat: " << endl;
    float min = a[0].tinhLuong();
    for (i = 1; i < n; i++){
        if (a[i].tinhLuong() < min){
            min = a[i].tinhLuong();
        }
    }
    for (i = 0; i < n; i++){
        if (a[i].tinhLuong() == min){
            a[i].xuat();
        }
    }

    return 0;
}