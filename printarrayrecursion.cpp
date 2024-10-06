#include<bits/stdc++.h>
using namespace std;
void print( int arr[],int index,int n){
    if(index==n){
        return ;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);

}
void pritrev(int arr[], int n){
    if(n==0){
        return ;
    }
    cout<<arr[n]<<" ";
    pritrev(arr,n-1);
}
int  sum(int arr[],int index,int n){
    if(index==n){
        return 0;
    }
    return arr[index]+sum(arr,index+1,n);
}
int revsum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n]+revsum(arr,n-1);
}
int arrmin(int arr[],int index,int n){
    if(index==n-1){
        return arr[index];
    }
    return min(arr[index],arrmin(arr,index+1,n));
}
int arrmax(int arr[],int n){
    if(n==0)
    return arr[0];
    return max(arr[n],arrmax(arr,n-1));
}
int main(){
    int arr[]={987,2,3,42,45,767,545};
    print(arr,0,5);
    cout<<endl;
    cout<<" our new revrsed array is "<<endl;
    pritrev(arr,5);
    cout<<endl;
    cout<<"our sum of array is "<<sum(arr,0,7)<<endl;
    cout<<"our rev sum is "<<revsum(arr,6)<<endl;
    cout<<"our min elemnt in the array is "<<arrmin(arr,0,7)<<endl;
    cout<<"our max elemnt in array is "<<arrmax(arr,6)<<endl;
}