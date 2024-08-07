#include <iostream>
#include <cmath>

using namespace std;

class Tamgiac{
    float x1, y1, x2, y2, x3, y3;
    public:
        Tamgiac(float = 0, float = 0, float = 0, float = 0, float = 0, float = 0);
        float chuVi();
        float dienTich();
        void inThongTin();
        void nhap();
        static float khoangcach(float x1, float y1, float x2, float y2){
            return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // Hàm inline
        }
};

Tamgiac::Tamgiac(float x11, float y11, float x21, float y21, float x31, float y31){
    x1 = x11;
    y1 = y11;
    x2 = x21;
    y2 = y21;
    x3 = x31;
    y3 = y31;
}

float Tamgiac::chuVi(){
    float a = khoangcach(x1, y1, x2, y2);
    float b = khoangcach(x1, y1, x3, y3);
    float c = khoangcach(x2, y2, x3, y3);
    return a + b + c;
}

float Tamgiac::dienTich(){
    float a = khoangcach(x1, y1, x2, y2);
    float b = khoangcach(x1, y1, x3, y3);
    float c = khoangcach(x2, y2, x3, y3);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Tamgiac::inThongTin(){
    cout << "Toa do dinh 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Toa do dinh 2: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Toa do dinh 3: (" << x3 << ", " << y3 << ")" << endl;
}

void Tamgiac::nhap(){
    cout << "Toa do dinh 1: ";
    cin >> x1 >> y1;
    cout << "Toa do dinh 2: ";
    cin >> x2 >> y2;
    cout << "Toa do dinh 3: ";
    cin >> x3 >> y3;
}

int main(){
    Tamgiac a[1000];
    int n, i;
    cout << "Nhap so tam giac: ";
    cin >> n;
    for(i = 0; i < n; i++){
        a[i].nhap();
    }
    int vtmax = 0;
    for(i = 1; i < n; i++){
        if(a[i].dienTich() > a[vtmax].dienTich()){
            vtmax = i;
        }
    }
    cout << "Tam giac co dien tich lon nhat: " << endl;
    a[vtmax].inThongTin();


    return 0;
}

