#include<bits/stdc++.h>
using namespace std;
void print(int**  arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";    
                }
    }
}
void maxmsm(int** arr,int row,int col){
    int mxsm=INT_MIN,index;  
        

    for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++){
          total+=arr[i][j];}
          if(total>mxsm){
          mxsm=total;
          index=i;
        
    }
    }
    cout<<"mxsm is :"<<mxsm<<" index of row is :"<<index;
    


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
 print(arr,row,col);
 maxmsm(arr,row,col);
 // Deallocate memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;

}