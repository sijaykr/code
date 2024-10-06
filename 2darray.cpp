#include<bits/stdc++.h>
using namespace std;
void print(int arr[][4],int row,int col){
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
    cout<<arr[i][j]<<" ";
}
}
}
 int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x=12;
    int ar1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={11,22,33,44,55,66,77,88,99,111,1111,11111};
    int ansarr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
             ansarr[i][j]={ar1[i][j]+arr2[i][j]};
        }
    }/*
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==x)
            cout<<"yes elemnt found :";
            else
            cout<<"elemnt is not found :";
        }
    }*/
    print(ansarr,3,4);
    return 0;
 }