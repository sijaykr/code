#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ,root=1;
    cout<<"please enter the value for the num :";
    cin>>num;
    if(num==0||num==1){
        cout<< num;
    }
    while(root*root<=num){
        if((root+1)*(root+1)>num){
            break;
            }
            root++;
           
        }
         cout<<"our desire  sqrt root is :"<<root;


    
}