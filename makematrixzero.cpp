#include<bits/stdc++.h>
using namespace std;
void markrow(vector<vector<int> > &matrix,int i,int m){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
        matrix[i][j]=-1;
    }
    }
}
void markcol(vector<vector<int> > &matrix,int j,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
        matrix[i][j]=-1;
    }
    }
}

void makezero(vector<vector<int> > &matrix,int n,int m){
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markrow(matrix,i,m);
                markcol(matrix,j,n);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    
    int n,m;
    cout<<"please enter the value for the row and column :";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m));
    
    cout<<"please enter the elemnt of the matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];

        }
    }
    makezero(matrix,n,m);
    cout<<"our zero matrix is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
    }

}