
#include<bits/stdc++.h>
using namespace std;
void printmat(int** arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotatematrix(int** &arr,int &row,int &col){
    // Allocate memory for the rotated matrix
    int** rotated = new int*[col];
    for (int i = 0; i < col; i++) {
        rotated[i] = new int[row];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            rotated[j][row-1-i]=arr[i][j];
        }
    }
//printmat(arr,row,col);
//printmat(rotated,row,col);
cout<<endl;
// Free allocated memory for old matrix
    for (int i = 0; i < col; i++) {
        delete[] arr[i];
    }
    delete[] arr;
arr=rotated;
swap(row,col);

}
int main(){
    cout<<"please enter the value for the row and column that shuld be equal:";
    int row,col,k;
   
    cin>>row>>col;
    // Allocate memory for the original matrix
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
    cout<<"please enter the elemnt for the matrix:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout << "Please enter the number of 90-degree rotations: ";
    
    cin >> k;
    k = k % 4; // Normalize k to be between 0 and 3
int new_k=k;
    while (k--) {
        rotatematrix(arr, row, col);
    }

    cout << "The matrix after " << new_k << " rotations by 90 degrees is:" << endl;
    printmat(arr, row, col);
    // Free allocated memory for the original matrix
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;


}
/*
 
using namespace std;

void printmat(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotatematrix(int** &arr, int &row, int &col) {
    // Allocate memory for the rotated matrix
    int** rotated = new int*[col];
    for (int i = 0; i < col; i++) {
        rotated[i] = new int[row];
    }

    // Perform the rotation
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            rotated[j][row - 1 - i] = arr[i][j];
        }
    }

    // Free allocated memory for the old matrix
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    // Update arr to point to the rotated matrix
    arr = rotated;
    swap(row, col);
}

int main() {
    cout << "Please enter the number of rows and columns: ";
    int row, col, k;
    cin >> row >> col;

    // Allocate memory for the original matrix
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    cout << "Please enter the elements of the matrix: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Please enter the number of 90-degree rotations: ";
    cin >> k;
    k = k % 4; // Normalize k to be between 0 and 3

    int original_k = k; // Preserve the number of rotations for later

    while (k--) {
        rotatematrix(arr, row, col);
    }

    cout << "The matrix after " << original_k << " rotations by 90 degrees is:" << endl;
    printmat(arr, row, col);

    // Free allocated memory for the final matrix
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

/*
#include <iostream>
using namespace std;

void printmat(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotatematrix(int** arr, int row, int col) {
    // Allocate memory for the rotated matrix
    int** rotated = new int*[col];
    for (int i = 0; i < col; i++) {
        rotated[i] = new int[row];
    }

    // Rotate the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            rotated[j][row - 1 - i] = arr[i][j];
        }
    }

    // Print the rotated matrix
    printmat(rotated, col, row);

    // Free allocated memory for rotated matrix
    for (int i = 0; i < col; i++) {
        delete[] rotated[i];
    }
    delete[] rotated;
}

int main() {
    cout << "Please enter the value for the number of rows and columns: ";
    int row, col;
    cin >> row >> col;

    // Allocate memory for the original matrix
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    cout << "Please enter the elements for the matrix: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The rotated matrix by 90 degrees is:" << endl;
    rotatematrix(arr, row, col);

    // Free allocated memory for the original matrix
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
*/