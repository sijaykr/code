#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for the row :";
    cin>>row;
    cout<<"please enter the value for thw column :";
    cin>>col;
    char c;
    cout<<"please enter the value for the character :";
    cin>>c;
    cout<<"ypur pattern is :"<<endl;
    for(int i=1;i<=row;i++){
      char   t=c+(i-1);
        for(int j=1;j<=i;j++){
            cout<<t<<" ";

        }
 cout<< endl;
    }

}