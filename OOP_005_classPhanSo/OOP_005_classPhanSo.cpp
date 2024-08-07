#include <iostream>

using namespace std;


class PhanSo{
    private:    
        int tuSo;
        int mauSo;
    public:    
        PhanSo(int tuSo, int mauSo){
            this->tuSo = tuSo;
            this->mauSo = mauSo;
        }
        void nhap(){
            cin >> tuSo >> mauSo;
        }

        void xuat(){
            cout << tuSo << "/" << mauSo;
        }
        
};

int main(){

}