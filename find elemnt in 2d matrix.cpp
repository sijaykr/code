#include<bits/stdc++.h>
using namespace std;
int main(){
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),row_ind,col_ind,mid,start=0,end=m*n-1;
        while(start<=end){
            mid=start+(end-start)/2;
            row_ind=mid/n;
            col_ind=mid%n;
            if(matrix[row_ind][col_ind]==target){
                return 1;
            }
            else if(matrix[row_ind][col_ind]<target){
                start=mid+1;
            }
            else
            end=mid-1;



        }
        return 0;
        
    }
}