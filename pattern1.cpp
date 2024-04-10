#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    char c;
    cout<<"please enter the value  for column :"<<endl;
cin>>col;

cout<<"please enter the value for row :";
cin>>row;
cout<<"please enter the character that you want to print ::";
cin>>c;

for(int i=1;i<=row;i=i+1){


for(int j=1;j<=col;j=j+1){
    cout<<c<<" ";
}
cout<<endl;
}

}