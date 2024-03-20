#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"please enter the value of num to be checked for prime :";
    cin>>num;
    if(num<2){
        cout<<num<<"  given num is not prime " ;
        return 0;
    }
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                cout<<"it is not prime :";
                return 0;
            }
        }
    }
    cout<<num<<"  is prime:";
    return 0;
}