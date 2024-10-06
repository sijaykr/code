#include<bits/stdc++.h>
using namespace std;

void print(int**arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }

}
void reversemat(int** arr,int row,int col){
    for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
            


        }
    }
    cout<<" our reversed array is :";
    print(arr,row,col);
}
void sumofdignl(int** arr, int row,int col){
int firstsum=0;
for(int i=0;i<row;i++){

        firstsum+=arr[i][i];
    }

cout<<"digonal sum as first sum :"<<firstsum;
int secondsum=0;
int i=0,j=col-1;
while(j>=0){
    secondsum+=arr[i][j];
    i++;
    j--;
}

cout<<"digonal sum as first sum :"<<firstsum<<" digonal sum as second sum  is :"<<secondsum;

}
int main(){
    int row,col;
    cout<<"please enter the value for the row :";
    cin>>row;
    cout<<"please enter the value for the column :";
    cin>>col;
    // Dynamic memory allocation for 2D array
   
    /* Dynamic memory allocation for 2d array :*/
    int** arr =new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    cout<<"please enter the elemnt in the arraY;";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,row,col);
    sumofdignl(arr,row,col);
    reversemat(arr,row,col);
    // Deallocate memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
