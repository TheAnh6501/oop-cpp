#include <iostream>
#include <fstream>

using namespace std;

void reverse(int arr[], int n){
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void max(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Phan tu lon nhat trong mang la: " << max << endl;
}
void sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    fstream inputFile;
    inputFile.open("dat12.txt", ios::in);
    if(!inputFile){
        cout << "Khong mo duoc file" << endl;
        return 1;
    }
    int n;
    inputFile >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        inputFile >> arr[i];
    }
    inputFile.close();

    cout << "Mang ban dau: ";
    print(arr, n);
    cout << "Mang sau khi dao nguoc: ";
    reverse(arr, n);
    print(arr, n);
    max(arr, n);
    cout << "Mang sau khi sap xep: ";
    sort(arr, n);
    print(arr, n);

    return 0;
}