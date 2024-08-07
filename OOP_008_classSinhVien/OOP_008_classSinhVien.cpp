#include <iostream>
#include <string>

using namespace std;

class SinhVien{
    public:
        string hoTen;
        float diemToan;
        float diemAnh;
        float diemLTC;
        float diemCong;
    
        SinhVien(string = "", float = 0, float = 0, float = 0, float = 0);
        void nhap();
        void xuat();
        float tinhDiemTrungBinh();
        float tinhDiemHocBong();
};

SinhVien::SinhVien(string ht, float dt, float da, float dltc, float dcong){
    hoTen = ht;
    diemToan = dt;
    diemAnh = da;
    diemLTC = dltc;
    diemCong = dcong;
}

void SinhVien::nhap(){
    cin.ignore();
    cout << "Ho ten: ";
    getline (cin, hoTen);
    cout << "Diem toan: ";
    cin >> diemToan;
    cout << "Diem anh: ";
    cin >> diemAnh;
    cout << "Diem LTC: ";
    cin >> diemLTC;
    cout << "Diem cong: ";
    cin >> diemCong;
}

void SinhVien::xuat(){
    cout << "Ho ten: " << hoTen << endl;
}

float SinhVien::tinhDiemTrungBinh(){
    return (diemToan + diemAnh + diemLTC) / 3;
}

float SinhVien::tinhDiemHocBong(){
    return tinhDiemTrungBinh() + diemCong;
}

int main(){
    SinhVien a[1000];
    int n, i;
    cout << "So sinh vien: ";
    cin >> n;
    // In thông tin các sinh viên
    for (i = 0; i < n; i++){
        cout << "Sinh vien thu " << i + 1 << ": ";
        a[i].nhap();
    }
    // Danh sach sinh vien thi lai theo tung mon
    cout << "Danh sach sinh vien thi lai mon Toan: " << endl;
    for (i = 0; i < n; i++){
        if (a[i].diemToan <= 4.0){
            a[i].xuat();
        }
    }
    cout << "Danh sach sinh vien thi lai mon Anh: " << endl;
    for (i = 0; i < n; i++){
        if (a[i].diemAnh <= 4.0){
            a[i].xuat();
        }
    }
    cout << "Danh sach sinh vien thi lai mon LTC: " << endl;
    for (i = 0; i < n; i++){
        if (a[i].diemLTC <= 4.0){
            a[i].xuat();
        }
    }
    // Sap xep va in sinh vien theo thu tu dtb
    for (i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i].tinhDiemTrungBinh() < a[j].tinhDiemTrungBinh()){
                swap(a[i], a[j]);
            }
        }
    }
    cout << "Danh sach sinh vien theo thu tu dtb: " << endl;
    for (i = 0; i < n; i++){
        a[i].xuat();
    }
    // In ra danh sach sinh vien duoc hoc bong
            
    return 0;
}