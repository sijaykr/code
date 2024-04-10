#include<bits/stdc++.h>
using namespace std;
/* print pattern 
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25 

*/
int main(){
    int row,col,count=1;
    cout<<"please enter the value for row :";
    cin>>row;
    cout<<"please enter the value for column :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<count <<" ";
            count =count+1;
        }
        cout<<endl;
    }
}
