#include <iostream>
using namespace std;
void sum(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void sum(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}
int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMat[3][3];
    sum(mat1, mat2, resultMat);
    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << resultMat[i][j] << " ";
        }
        cout << endl;
    }
    int size = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int resultArr[size];
    sum(arr1, arr2, resultArr, size);
    cout << "Sum of arrays:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << resultArr[i] << " ";
    }
    cout << endl;
    return 0;
}

