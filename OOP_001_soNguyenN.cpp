#include <iostream>
#include <cmath>

using namespace std;

// Ham kiem tra so nguyen to
bool isPrime(int x){
    if (x <= 1){
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0){
            return false;
        }
    };
    return true;
}

// Ham kiem tra so chan
bool checkEven(int x){
    if (x % 2 == 0){
        return true;
    } else
        return false;
}

// Ham tinh giai thua
int factorial(int x){
    if (x == 1){
        return 1;
    }
    return x * (factorial(x - 1));
}

int main(){
    int n;
    do {
        cout << "Nhap so nguyen N: " << endl;
        cin >> n;
        if (n < 1){
            cout << "So N phai lon hon hoac bang 1" << endl;
        }
    } while (n < 1);
    
    // In cac so nguyen nho hon hoac bang N
    cout << "Cac so nguyen nho hon hoac bang N: ";
    for (int i = 0; i <= n; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    };
    cout << endl;

    // Tim tong T = 1 + 1/2 + 1/3 + ... + 1/n
    float T = 0;
    for (int i = 1; i <= n; i++){
        T += 1.0 / i;
    };
    cout << "T = " << T << endl;
   
   // Tim tich P = 1 * 2 * 3 * ... * n (Giai thua cua N)
    int P = factorial(n);
    cout << "P = " << P << endl;

    // Tim S = 1 - 1/2 + 1/3 - ... + ((-1)^n-1)/n
    float S = 1.0;
    for (int i = 2; i <= n; i++){
        if (checkEven(i)){
            S -= 1.0 / i;
        } else{
            S += 1.0 / i;
        }
    };
    cout << "S = " << S << endl;

    // Tim Q = 1 - 1/2 + 1/6 - ... + ((-1)^n-1/n)
    float Q = 1;
    for (int i = 2; i <= n; i++){
        if(checkEven(i)){
            Q -= 1.0 / factorial(i);
        } else{
            Q += 1.0 / factorial(i);
        }
    };
    cout << "Q = " << Q << endl;

    return 0;
}