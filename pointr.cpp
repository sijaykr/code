#include<bits/stdc++.h>
using namespace std;
int main(){
int a=10;
int *ptr=&a;
cout<<"our value is "<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;
int b=20;
ptr=&b;
cout<<ptr<<endl;
cout<<*ptr<<endl;
int arr[5]={2,3,4,5,6};
int *ptr1=arr;
//print the address of first elemnet of array 
cout<<arr<<endl;
cout<<arr+0<<endl;
cout<<&arr[0]<<endl;
cout<<ptr1<<endl;
cout<<&arr[1]<<endl;
// print the value of first elemnt of the arraY :
cout<<*arr<<endl;
cout<<arr[0]<<endl;
cout<<*(arr+0)<<endl;
cout<<*ptr1<<endl;


// print addres of all the elemnt of the array :
for(int i=0;i<5;i++){
    cout<<arr+i<<endl;
}

/// print all the value of the array from the given elemnt :
for(int i=0;i<5;i++){
    cout<<*(arr+i)<<endl;

}
cout<<"value for the new form ;";
for(int i=0;i<5;i++){
    cout<<ptr1[i]<<endl;
    cout<<*(ptr1+i)<<endl;

}
// print the value 
for(int i=0;i<5;i++){
    cout<<ptr1[i]<<" ";
}
cout<<endl;
// print the addressss of the value of the array
for(int i=0;i<5;i++){
    cout<<ptr+i<<endl;
}
// print the value of the  element of the array 
cout<<endl;
for(int i=0;i<5;i++){
    cout<<*ptr1<<" ";
    ptr1++;
}
 char chr[5] = "1234";
 char *ptr2=chr;
 cout<<chr<<endl;
 cout<<ptr2<<endl;
 cout<<(void*)chr<<endl;
 cout<<(void*)ptr2<<endl;
 char name='da';
 char *ptr3=&name;
 cout<<(void*)&name<<endl;
 cout<<(void*)ptr3<<endl;


}