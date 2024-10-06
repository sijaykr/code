#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int> > mat,int n,int m,int x){
    int i=0,j=m-1;
    while(i<n &&  j>=0){
        if(mat[i][j]==x)
        return 1;
        else if(mat[i][j]<x)
        i++;
        else
        j--;
    }

return 0;
}
int main(){
    
    int row,col,x;
    cout<<"please enter the value for the row col and target value :";
    cin>>row>>col>>x;
    vector<vector<int> > arr(row,vector<int>(col));
    cout<<"please eneter the value for the 2 d matrix:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"findable elemnt is :"<<search(arr,row,col,x);
}