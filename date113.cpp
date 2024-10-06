#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,num;
    cout<<"please enter the value for the num:";
    cin>>num;
    char c,name;
    cout<<"please enter the character for the name :";
    cin>>name;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
            cout<<"  ";
        }
        for(c=name;c<=name+i-1;c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}