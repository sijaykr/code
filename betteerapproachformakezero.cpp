#include<bits/stdc++.h>
using namespace std;
void makezero(vector<vector<int> >& matrix,int n,int m){
    vector<int>row(n,0);
    vector<int>col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
if(row[i]==1||col[j]==1){
    matrix[i][j]=0;
}

    }
    }
    }
int main(){
    int n,m;
    cout<<"please enter the value for the row and column ;";

    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m));
    cout<<"please enter the value for the elemnt of the arrayu :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    makezero(matrix,n,m);
    cout<<"our zero matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}