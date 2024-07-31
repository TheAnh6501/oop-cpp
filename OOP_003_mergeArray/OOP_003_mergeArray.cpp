#include <iostream>
#include <fstream>

using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i < n1){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main(){
    fstream inputFile1;
    fstream inputFile2;
    fstream outputFile;

    inputFile1.open("dat131.txt", ios::in);
    inputFile2.open("dat132.txt", ios::in);
    outputFile.open("output13.txt", ios::out);
    if(!inputFile1 || !inputFile2 || !outputFile){
        cout << "Khong the xu ly duoc file" << endl;
        return 1;
    }
    int n1, n2;
    inputFile1 >> n1;
    inputFile2 >> n2;
    int arr1[n1], arr2[n2];
    for(int i = 0; i < n1; i++){
        inputFile1 >> arr1[i];
    }
    for(int i = 0; i < n2; i++){
        inputFile2 >> arr2[i];
    }
    
    int arr3[n1 + n2];
    merge(arr1, arr2, n1, n2, arr3);
    outputFile << n1 + n2 << endl;
    for (int i = 0; i < n1 + n2; i++){
        outputFile << arr3[i] << " ";
    }
    inputFile1.close();
    inputFile2.close();
    outputFile.close();

    return 0;
}