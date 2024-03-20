#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"please enter the value for print the factorial :";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
        cout<<"factorial of  "  <<  n <<" is  " << fact;  
          }

