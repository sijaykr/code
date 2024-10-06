#include<bits/stdc++.h>
using namespace std;
void printarr(int** arr2,int col,int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

};
void maxcolsm(int** arr,int row,int col){
    int mxsmcl=INT_MIN,index=-1;
    for(int i=0;i<col;i++){
        int total=0;
        for(int j=0;j<row;j++)
            total+=arr[i][j];
        if(total>mxsmcl){
            mxsmcl=total;
            index=i;
        }
    }

cout<<"our max sum is :"<<mxsmcl<<" index is "<<index;
}
int main(){
    int row,col;
    cout<<"please enter the value for the row  :";
    cin>>row;
    cout<<"please enter the value for the column :";
cin>>col;
// Dynamic memory allocation for 2D array
    int** arr = new int*[row];
    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
cout<<"please enter the value for the elemnt of 2d array :";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
cout<<"our enterrd 2d array is :"<<endl;
 printarr(arr,col,row);
 cout<<endl;
 
 maxcolsm(arr,row,col);
 // Deallocate memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;

}