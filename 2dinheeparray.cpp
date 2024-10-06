#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"plesse enter the value for the row and column :";
    cin>>n>>m;
    // creating  heap memory for 2d array :
    int **ptr=new int *[n];
    for(int i=0;i<n;i++){
        ptr[i]=new int[m];
    }
    // assinging value to the 2d array of heap memory alloacted :
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
        
    }
cout<<"our array after heap memory alloaction :";
    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;
    

}