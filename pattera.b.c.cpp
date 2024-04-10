#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value of row :";
    cin>>row;
    cout<<"please enter the value col :";
cin>>col;
char c;
cout<<"please enter the value of character :";
cin>>c;
for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
      char t=c+(j-1);
        cout<<t<<" ";
    }
    cout<<endl;
}
}
