
#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,b,h;
    cout<<"please enter the value for the 3d array in form of lemght breadth and height :";
    cin>>l>>b>>h;
    // creating heap for 1d arry 
    int ***ptr=new int **[l];
    //creating 2d array in heap
    for(int i=0;i<l;i++){
        ptr[i]=new int *[b];

        for(int j=0;j<b;j++){

        ptr[i][j]=new int [h];
        }
    }
    // taking input value in 3d array:
    for(int i=0;i<l;i++)
    for(int j=0;j<b;j++)
    for(int k=0;k<h;k++)
    ptr[i][j][k] = i+j+k;
    // giving the value as output;
    for(int i=0;i<l;i++)
    for(int j=0;j<b;j++)
    for(int k=0;k<h;k++)
    cout<<ptr[i][j][k] <<" ";
    

//for(int i=0;i<h;i++){
  //  delete[] *ptr[i];

//}
//for(int i=0;i<b;i++)
//delete[] *ptr[i];
//delete[] ptr;
}