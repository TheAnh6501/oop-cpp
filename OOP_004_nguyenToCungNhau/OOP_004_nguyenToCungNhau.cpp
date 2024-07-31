#include <iostream>

using namespace std;

void nhap(int n, int arr[]){
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

int UCLN(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}
int main(){
    int n;
    cout << "N = ";
    cin >> n;
    int arr[n];
    nhap(n, arr);
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (UCLN(arr[i], arr[j]) != 1){
                cout << "Khong la so nguyen to cung nhau" << endl;
                return 0;
            }
        }
    }

    cout << "La so nguyen to cung nhau" << endl;

    return 0;
}