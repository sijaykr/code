#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col,count=1;
    cout<<"please enter the value for row :"<<endl;
    cin>>row;
    cout<<"enter the value for the column :"<<endl;
    cin>>col;
    for(int j=1;j<=row;j++){
        for(int i=j;i>=1;i--){
            
            cout<< i <<" ";
          
        count=count +1;
        }
        
        cout<<endl;
      
    }


} 
